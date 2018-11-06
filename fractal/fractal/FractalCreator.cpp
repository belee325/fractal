#include "FractalCreator.h"

FractalCreator::FractalCreator(int width, int height) : width{width}, height{height}, bitmap{width, height}, zl{width, height}, hist{new int[Mandelbrot::MAX_ITERATION]{0}}, fractal{new int[width*height]{0}} {}

FractalCreator::~FractalCreator(){}

void FractalCreator::run(string file_name){
	calculate_iteration();
	calculate_range_total();
	draw_fractal();
	write_bitmap(file_name);
}

void FractalCreator::add_color_range(double range_end, const RGB& rgb){
	color_range.push_back(range_end*Mandelbrot::MAX_ITERATION);
	colors.push_back(rgb);
	if(first_range){
		range_totals.push_back(0);
	}
	first_range = true;
}

void FractalCreator::add_zoom(const Zoom& zoom){
	zl.add(zoom);
}

void FractalCreator::calculate_range_total(){
	int range_idx = 0;
	for(int i =0; i < Mandelbrot::MAX_ITERATION; i++){
		int pixels = hist[i];
		if(i >= color_range[range_idx]){
			range_idx++;
		}
		range_totals[range_idx] += pixels;
	}
	for(auto v: range_totals){
		cout << v << endl;
	}
}

void FractalCreator::calculate_iteration(){
	for(int y =0; y < height; y++){
		for(int x = 0; x < width; x++){
			pair<double, double> coord = zl.apply_zoom(x,y);
			int iter = Mandelbrot::get_iteration(coord.first, coord.second);
			fractal[y*width + x] = iter;
			if(iter < Mandelbrot::MAX_ITERATION){
				hist[iter]++;
			}
		}
	}
}

int FractalCreator::get_range(int iter) const {
	int range{0};
	for(int i = 1; i < color_range.size(); i++){
		range =i;
		if(color_range[i] > iter){
			break;
		}
	}
	range--;
	return range;
}

void FractalCreator::draw_fractal(){
	int total{0};
	for(int i =0; i < Mandelbrot::MAX_ITERATION; i++){
		total += hist[i];
	}
	for(int y =0; y < height; y++){
		for(int x = 0; x < width; x++){
			int iter = fractal[y*width + x];
			int range{get_range(iter)};
			int range_start{color_range[range]};
			int range_total{range_totals[range]};
			RGB& start{colors[range]};
			RGB& end{colors[range+1]};
			RGB& diff = end - start;
			uint8_t red{0};
			uint8_t green{0};
			uint8_t blue{0};
			
			
			
			if(iter != Mandelbrot::MAX_ITERATION){
				double hue{0.0};
				int total_pixels{0};
				for(int i =range_start; i <= iter; i++){
					total_pixels += hist[i];
				}
				double scale{((double)total_pixels/total)};
				red = start.r + diff.r*scale;
				green = start.g + diff.g*scale;
				blue = start.b + diff.b*scale;
			} 
			bitmap.set_pixel(x,y,red,green,blue);
			
		}
	}
}
void FractalCreator::write_bitmap(string name){
	bitmap.write(name);
}
