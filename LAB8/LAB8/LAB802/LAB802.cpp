// LAB802.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string nickname;
	string line_id;
	string phone;
};
int main() {
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: cin >> students[i]...
		cout << " enter id: ";
		cin >> students[i].id;
		cout << " enter nickname: ";
		cin >> students[i].nickname;
		cout << " enter line_id: ";
		cin >> students[i].line_id;
		cout << " enter phone: ";
		cin >> students[i].phone;

		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t\t" << students[i].line_id << "\t" << students[i].phone << "\n";

		cout << "----------------------\n";
	}
	return 0;
}