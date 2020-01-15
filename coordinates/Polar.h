#pragma once
#include "Rect.h"
#include <math.h>

class Polar {

public:
	const double pi = 4 * atan(1);
	//double theta;
	double distance, angle;
	Polar();
	Polar(Rect);
	Polar(double r, double theta);
	void show();
	double getx();
	double gety();
	double get_theta(double x, double y);
	Polar operator + (Polar other);
	Polar operator - (Polar other);
	void operator = (Polar other);
	operator Rect() const;


};
