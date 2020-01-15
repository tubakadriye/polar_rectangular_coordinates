#include <iostream>
#include "Rect.h"
//#include "Polar.h"
#include <math.h>

using namespace std;

Rect::Rect()
{
	x = 0;
	y = 0;
}

Rect::Rect(double a, double b)
{
	x = a;
	y = b;

}

void Rect::show() {
	cout << "(" << x << "," << y << ")" << endl;
}

Rect Rect::operator +(Rect other)
{
	return Rect(x + other.x, y + other.y);
}

Rect Rect::operator -(Rect other)
{
	return Rect(x - other.x, y - other.y);
}

 /*Rect::operator Polar() const
{
	return Polar(sqrt(x * x + y * y), atan(y / x));
}*/
