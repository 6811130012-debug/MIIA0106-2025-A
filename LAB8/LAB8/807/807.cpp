// 807.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Phone 
struct Phone {
	string mobile;
	string home;
};

// Parent
struct Parent {
	string name;
	string relationship;
	Phone contact;
};

// Student
struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};

// รับข้อมูล
void inputStudent(Student& s) {
	cout << "Student ID: ";
	cin >> s.id;

	cout << "Nickname: ";
	cin >> s.nickname;

	cout << "Line ID: ";
	cin >> s.lineId;

	cout << "\n--- Student Contact ---\n";
	cout << "Mobile Number: ";
	cin >> s.myContact.mobile;

	cout << "Home Number: ";
	cin >> s.myContact.home;

	cout << "\n--- Parent Data ---\n";
	cout << "Parent Name: ";
	cin >> s.myParent.name;

	cout << "Relationship: ";
	cin >> s.myParent.relationship;

	cout << "\n--- Parent Contact ---\n";
	cout << "Parent Mobile Number: ";
	cin >> s.myParent.contact.mobile;

	cout << "Parent Home Number: ";
	cin >> s.myParent.contact.home;
}

// แสดงข้อมูล
void displayStudent(const Student& s) {
	cout << "\n===== Student Information =====\n";
	cout << "ID : " << s.id << endl;
	cout << "Nickname : " << s.nickname << endl;
	cout << "Line ID : " << s.lineId << endl;

	cout << "\nStudent Contact\n";
	cout << "Mobile : " << s.myContact.mobile << endl;
	cout << "Home : " << s.myContact.home << endl;

	cout << "\nParent Data\n";
	cout << "Name : " << s.myParent.name << endl;
	cout << "Relationship : " << s.myParent.relationship << endl;

	cout << "\nParent Contact\n";
	cout << "Mobile : " << s.myParent.contact.mobile << endl;
	cout << "Home : " << s.myParent.contact.home << endl;
}

// Main
int main() {
	Student s1;

	inputStudent(s1); // รับข้อมูล
	displayStudent(s1); // แสดงข้อมูล

	return 0;
}