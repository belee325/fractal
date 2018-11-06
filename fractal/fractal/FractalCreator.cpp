#include "FractalCreator.h"

FractalCreator::FractalCreator(int width, int height) : width{width}, height{height}, bitmap{width, height}, zl{width, height}, hist{new int[Mandelbrot::MAX_ITERATION]{0}}, fractal{new int[width*height]{0}} {}

FractalCreator::~FractalCreator(){}

void FractalCreator::run(string file_name){
	add_zoom(Zoom(width/2, height/2, 4.0/width));
	add_zoom(Zoom(295, height - 202, 0.1));
	add_zoom(Zoom(302, height-304, 0.1));
	add_zoom(Zoom(250, height-350, 0.1));
	calculate_iteration();
	draw_fractal();
	write_bitmap(file_name);
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
void FractalCreator::draw_fractal(){
	int total{0};
	for(int i =0; i < Mandelbrot::MAX_ITERATION; i++){
		total += hist[i];
	}
	
	for(int y =0; y < height; y++){
		for(int x = 0; x < width; x++){
			uint8_t red{0};
			uint8_t green{0};
			uint8_t blue{0};
			
			
			int iter = fractal[y*width + x];
			if(iter != Mandelbrot::MAX_ITERATION){
				double hue{0.0};
				for(int i =0; i < iter; i++){
					hue+=(double)hist[i]/total;
				}
				green =pow(255,hue);
			}
			
			bitmap.set_pixel(x,y,red,green,blue);
			
		}
	}
}
void FractalCreator::write_bitmap(string name){
	bitmap.write(name);
}
void FractalCreator::add_zoom(const Zoom& zoom){
	zl.add(zoom);
}