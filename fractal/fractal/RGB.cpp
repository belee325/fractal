#include "RGB.h"

RGB::RGB(double r, double g, double b): r{r}, g{g}, b{b}{}

RGB::~RGB()
{
}

RGB& RGB::operator-(const RGB &other){
	r -= other.r;
	g -= other.g;
	b -= other.b;
	return *this;
}