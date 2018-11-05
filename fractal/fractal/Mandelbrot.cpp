#include "Mandelbrot.h"
#include <complex>

using namespace std;

int Mandelbrot::get_iteration(double x, double y){
	complex<double> z {0};
	complex<double> c(x,y);
	int iter{0};
	while(iter < MAX_ITERATION){
		z = z*z + c;
		if(abs(z) > 2){
			break;
		}
		iter++;
	}
	return iter;
}

Mandelbrot::Mandelbrot()
{
}

Mandelbrot::~Mandelbrot()
{
}

