#include <iostream>
#include "Rect.h"
#include "Polar.h"

using namespace std;

int main() {
	Rect R1(1, 1), R2(-1, 1), R3;
	Polar P1(1, 90), P3;
	Polar P2(1, 90);
	R1.show();
	R2.show();
	R3 = R1 + R2;
	R3.show();
	R3 = R1 - R2;
	R3.show();

	P1.show();
	cout << P1.getx() << endl;
	cout << P1.gety() << endl;
	P3 = P1 + P2; 
	P3.show();
	P3 = P1 - P2;
	P3.show();
	(P1 + P2).show();
	Rect R4 = P1; //converts P1 to R4 //conversion operator
	R4.show();
	//Polar P4 = R4;
	R1.show();
	Polar P4 = R1; //converts R1 to P4
	P4.show();
	cout << P4.pi<<endl;
	cout << P4.pi * 180 / P4.pi << endl;
	R2.show();
	Polar P7 = R2;
	P7.show();
	Rect R5(-1, -1), R6(1,-1);
	R5.show();
	Polar P5 = R5;
	P5.show();
	Polar P6 = R6;
	R6.show();
	P6.show();
	





	return 0;

}