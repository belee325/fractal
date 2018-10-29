#ifndef _BITMAP_HEADER_H_
#define _BITMAP_HEADER_H_
#include <cstdint>
#pragma pack(2)
using namespace std;

struct BitmapHeader{
	char header[2]{'B','M'};
	int32_t file_size{};
	int32_t reserved{0};
	int32_t data_offset{};
};

#endif /*_BITMAP_HEADER_H_*/