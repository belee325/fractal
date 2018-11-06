#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H
#include <string>
#include <vector>
#include <memory>
#include <array>
#include <iostream>
#include <algorithm>
#include <math.h>
#include "bitmap_header.h"
#include "bitmap_info_header.h"
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "RGB.h"

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
	vector<int> color_range;
	vector<RGB> colors;
	vector<int> range_totals;
	void calculate_range_total();
	bool first_range{false};
	
public:
	int get_range(int iter) const;
	FractalCreator(int width, int height);
	~FractalCreator();
	void add_zoom(const Zoom& zoom);
	void add_color_range(double range_end, const RGB& rgb);
	void run(string file_name);
};

#endif // FRACTALCREATOR_H
