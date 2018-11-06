#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"
int main(int argc, char **argv)
{
	
	int width = 800;
	int height = 600;
	FractalCreator fr{width, height};
	fr.add_color_range(0.0, RGB(0,0,0));
	fr.add_color_range(0.3, RGB(255,0,0));
	fr.add_color_range(0.5, RGB(255,255,0));
	fr.add_color_range(1.0, RGB(255,255,255));
	//cout << fr.get_range(310) << endl;
	fr.add_zoom(Zoom(width/2, height/2, 4.0/width));
	fr.add_zoom(Zoom(295, 202, 0.1));
	fr.add_zoom(Zoom(302, 304, 0.1));
	fr.run("test.bmp");
	//bitmap.write("test.bmp");
	cout << "Finished" << endl;
	return 0;
}
