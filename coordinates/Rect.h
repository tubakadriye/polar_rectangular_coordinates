#pragma once
//#include "Polar.h"
class Rect {

public:
	double x, y;
	Rect();
	Rect(double a, double b);
	void show();
	Rect operator + (Rect other);
	Rect operator - (Rect other);
	//operator Polar() const ;

};
