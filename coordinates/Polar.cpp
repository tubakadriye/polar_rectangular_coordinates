#include "Polar.h"
#include <iostream>

using namespace std;

Polar::Polar()
{
	distance = 0;
	angle = 0;
}

Polar::Polar(double r, double t)
{
	distance = r;
	angle = t;
}

void Polar::show()
{
	//cout << "r= " << distance << endl;
	//cout << "theta= " << angle << endl;
	cout << "(" << distance << "," << angle << ")" << endl;
}

double Polar::getx()
{
	//double x;
	//x = (distance * cos(angle * pi / 180));
	return (distance * cos(angle * pi /180));
}

double Polar::gety()
{
	//double y;
	//y = (distance * sin(angle * pi / 180));
	return (distance * sin(angle *pi/180));
}

double Polar::get_theta(double x, double y)
{
	double theta;
	double theta1 = atan(y / x ) ;
	if ((x > 0)& (y < 0)) theta = theta1 + 2 * pi;
	else if (x > 0) theta = theta1; 
	else if ((x < 0) & (y >= 0)) theta = theta1 + pi;
	else if ((x < 0) & (y < 0)) theta = theta1 + pi ;
	else if ((x == 0) & (y > 0)) theta = (pi *180/pi)/ 2;
	else if ((x == 0) & (y < 0)) theta = -(pi*180/pi) / 2;
	else theta = 0;
	return theta;
}

Polar Polar::operator + (Polar other)
{
	////Polar P;
	double x, y, r, theta;
	x = getx() + other.getx();
	y = gety() + other.gety();
	r = sqrt(x * x + y * y);
	//theta = atan(y / x);
	////P.distance = r;
	//P.angle = theta;
	theta = get_theta(x, y) * 180/pi;
	return Polar(r,theta);
}

Polar Polar::operator-(Polar other)
{
	double x, y, r, theta;
	x = getx() - other.getx();
	y = gety() - other.gety();
	r = sqrt(x * x + y * y);
	theta = get_theta(x,y)*180/pi;
	////P.distance = r;
	////P.angle = theta;
	return Polar(r, theta);
}

void Polar::operator = (Polar other)
{
	distance = other.distance;
	angle = other.angle;
}

Polar::operator Rect() const //converts Polar to Rect
{
	return Rect(distance * cos(angle * pi / 180), distance * sin(angle * pi / 180));
}

Polar::Polar(Rect R) //conversion constructor: converts Rect to Polar
{
	distance = sqrt(R.x * R.x + R.y * R.y);
	angle = get_theta(R.x,R.y)*180/pi;
}