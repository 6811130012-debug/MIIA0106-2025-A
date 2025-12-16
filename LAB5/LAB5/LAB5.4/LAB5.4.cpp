// LAB5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
    //"Call by value"
void chageByValue(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

	//"Call by reference"
void changeByReference(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 5;
	int b = 10;

	cout << "Before change: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	chageByValue(a, b);

	cout << "After  change: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	cout << "Before  change: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	changeByReference(a, b);

	cout << "After  change: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

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
