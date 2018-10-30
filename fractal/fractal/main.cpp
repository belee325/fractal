#include <iostream>
#include <string>
#include "bitmap_header.h"
#include "bitmap_info_header.h"
#include "Bitmap.h"

int main(int argc, char **argv)
{
	
	int width = 800;
	int height = 600;
	Bitmap bitmap(width,height);
	double min = 9999999;
	double max = -9999999;
	for(int y =0; y < height; y++){
		for(int x = 0; x < width; x++){
			double x_frac = (x - width/2) * 2.0/width;
			double y_frac = (y - height/2) * 2.0/height;
			if(x_frac < min){
				min = x_frac;
			}
			if(y_frac > max){
				max = y_frac;
			}
		}
	}
	bitmap.write("test.bmp");
	cout << "Hello" << endl;
	return 0;
}
