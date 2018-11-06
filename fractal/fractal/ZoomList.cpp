#include "ZoomList.h"

ZoomList::ZoomList(int width, int height): width{width}, height{height} {}

void ZoomList::add(const Zoom& zoom){
	zooms.push_back(zoom);
	x_center += (zoom.x - width/2) * scale;
	y_center += -(zoom.y - height/2) * scale;
	scale *= zoom.scale;
}

std::pair<double, double> ZoomList::apply_zoom(int x, int y){
	double x_frac{(x - width/2)*scale + x_center};
	double y_frac{(y - height/2)*scale + y_center};
	return std::pair<double,double>(x_frac,y_frac);
}


