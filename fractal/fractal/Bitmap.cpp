#include "Bitmap.h"
#include "bitmap_info_header.h"
#include "bitmap_header.h"
#include <fstream>
Bitmap::Bitmap(int width, int height): width{width}, height{height}, pixels{new uint8_t[width*height*3]{0}} {}

bool Bitmap::write(string file_name){
	BitmapHeader head{};
	BitmapInfoHeader info{};
	head.file_size = sizeof(BitmapHeader) + sizeof(BitmapInfoHeader) + width*height*3;
	head.data_offset = sizeof(BitmapHeader) + sizeof(BitmapInfoHeader);
	info.width = width;
	info.height = height;
	ofstream out{file_name};
	if(!out){
		return false;
	}
	else{
		return true;
	}
}

void Bitmap::set_pixel(int x, int y, uint8_t r, uint8_t g, uint8_t b){
	
}

Bitmap::~Bitmap()
{
}

