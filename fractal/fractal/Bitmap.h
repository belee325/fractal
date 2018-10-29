#ifndef BITMAP_H
#define BITMAP_H
#include <string>
#include <cstdint>
#include <memory>
using namespace std;
class Bitmap
{
private:
	int width{0};
	int height{0};
	unique_ptr<uint8_t []> pixels{nullptr};
public:
	Bitmap(int width, int height);
	bool write(string file_name);
	void set_pixel(int x, int y, uint8_t r, uint8_t g, uint8_t b);
	~Bitmap();

};

#endif // BITMAP_H
