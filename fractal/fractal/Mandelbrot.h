#ifndef MANDELBROT_H
#define MANDELBROT_H

class Mandelbrot
{
public:
	static const int MAX_ITERATION  = 1000;
	static int get_iteration(double x, double y);
	Mandelbrot();
	virtual ~Mandelbrot();

};

#endif // MANDELBROT_H
