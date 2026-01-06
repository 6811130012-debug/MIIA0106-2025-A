// 803.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
	// TODO
	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << " ID\tnickname\tLine ID\tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t\t" << s1.line_id << "\t" << s1.phone << "\n";
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << " enter id: ";
	cin >> s1.id;
	cout << " enter nickname: ";
	cin >> s1.nickname;
	cout << " enter line_id: ";
	cin >> s1.line_id;
	cout << " enter phone: ";
	cin >> s1.phone;
	cout << "\n=== Output (from function) ===\n";
	// TODO: เรียก printStudent
	printStudent(s1);
	return 0;
}