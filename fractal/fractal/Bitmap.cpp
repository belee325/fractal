#include "Bitmap.h"
#include "bitmap_info_header.h"
#include "bitmap_header.h"
#include <fstream>
Bitmap::Bitmap(int width, int height): width{width}, height{height}, pixels{new uint8_t[width*height*3]{0}} {};

bool Bitmap::write(string file_name){
	BitmapHeader head{};
	BitmapInfoHeader info{};
	int header_size = sizeof(BitmapHeader);
	int info_size = sizeof(BitmapInfoHeader);
	head.file_size = sizeof(BitmapHeader) + sizeof(BitmapInfoHeader) + width*height*3;
	head.data_offset = sizeof(BitmapHeader) + sizeof(BitmapInfoHeader);
	info.width = width;
	info.height = height;
	ofstream out{file_name, ios::binary};
	if(!out){
		return false;
	}
	out.write((char*)&head, sizeof(head));
	out.write((char*)&info, sizeof(info));
	out.write((char*)pixels.get(), width*height*3);
	out.close();
	return true;
}

void Bitmap::set_pixel(int x, int y, uint8_t r, uint8_t g, uint8_t b){
	uint8_t *pixel_ptr = pixels.get();
	pixel_ptr += y*3*width + x*3;
	pixel_ptr[0] = b;
	pixel_ptr[1] = g;
	pixel_ptr[2] = r;
}
