#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H
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

using namespace std;
class FractalCreator
{
private:
	int width{0};
	int height{0};
	Bitmap bitmap;
	ZoomList zl;
	unique_ptr<int[]> hist;
	unique_ptr<int[]> fractal;
	void calculate_iteration();
	void draw_fractal();
	void write_bitmap(string name);
	void add_zoom(const Zoom& zoom);
	
public:
	FractalCreator(int width, int height);
	~FractalCreator();
	void run(string file_name);
};

#endif // FRACTALCREATOR_H
