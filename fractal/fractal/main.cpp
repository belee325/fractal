#include <iostream>
#include "FractalCreator.h"

int main(int argc, char **argv)
{
	
	int width = 800;
	int height = 600;
	FractalCreator fr{width, height};
	fr.run("test.bmp");
	//bitmap.write("test.bmp");
	cout << "Finished" << endl;
	return 0;
}
