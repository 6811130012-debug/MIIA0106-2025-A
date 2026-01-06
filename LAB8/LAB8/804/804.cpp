// 804.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	// TODO
	Student temp = a;
	a = b;
	b = temp;
}
// TODO: sort เขียนเอง (Bubble sort)
// 20 54 30 45 55
// 20 30 45 54 55
void sortByID(Student students[], int size) {
	// TODO
	for(int i = 0 ; i < size - 1; i++) {
		for(int j = 0; j < size - i - 1; j++) 
		{
			// j จะควบคุม column
			if(students[j].id > students[j + 1].id) {
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}
void printStudents(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t\t" << students[i].line_id << "\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
}
int main() {
	const int SIZE = 5;
	Student students[SIZE];
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
	sortByID(students, SIZE);
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);
	return 0;
}