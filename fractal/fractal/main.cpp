#include <iostream>
#include <string>
#include <memory>
#include <array>
#include <algorithm>
#include <math.h>
#include "bitmap_header.h"
#include "bitmap_info_header.h"
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"

int main(int argc, char **argv)
{
	
	int width = 800;
	int height = 600;
	Bitmap bitmap(width,height);
	//double min = 9999999;
	//double max = -9999999;
	
	ZoomList zl(width, height);
	zl.add(Zoom(width/2, height/2, 4.0/width));
	zl.add(Zoom(295, height-202, 0.1));
	zl.add(Zoom(302, height-304, 0.1));
	
	unique_ptr<int[]> hist(new int[Mandelbrot::MAX_ITERATION]{0});
	unique_ptr<int[]> fractal(new int[width*height]{0});
	
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
	
	bitmap.write("test.bmp");
	cout << "Hello" << endl;
	return 0;
}
