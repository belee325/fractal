#ifndef RGB_H
#define RGB_H

struct RGB{
public:
	double r;
	double g;
	double b;
	RGB(double r, double g, double b);
	~RGB();
	RGB& operator-(const RGB &other);
};

#endif // RGB_H
