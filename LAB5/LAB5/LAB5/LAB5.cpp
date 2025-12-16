// LAB5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double rectanglearea(double width, double length)
{
	return width * length;
}
double circlearea(double radius)
{
	const double pi = 3.14;
	return 3.14 * radius * radius;
}
int main()
{
	double width, length, radius;

	//สี่เหลี่ยมผืนผ้า
	cout << "ค่า width: ";
	cin >> width;
	cout << "ค่า length: ";
	cin >> length;
	cout << "พื้นที่สี่เหลี่ยมผืนผ้า: "
	    << rectanglearea(width, length) << endl;

	//วงกลม
	cout << "ค่า radius: ";
	cin >> radius;
	cout << "พื้นที่วงกลม: "
	    << circlearea(radius) << endl;
	return 0;
	}

	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
