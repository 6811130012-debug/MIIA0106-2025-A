// LAB604.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateGrade(double score, char& grade)
{
	if (score >= 80) grade = 'A';
	else if (score >= 70) grade = 'B';
	else if (score >= 60) grade = 'C';
	else if (score >= 50) grade = 'D';
	else grade = 'F';
}

void displayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << endl;
	cout << "Student ID : " << id << endl;
	cout << fixed << setprecision(2);
	cout << "Score : " << score << endl;
	cout << "Grade : " << grade << endl;
}

int main()
{
	int size;
	cout << "Enter number of students: ";
	cin >> size;
	cin.ignore(); 

	string* name = new string[size];
	string* id = new string[size];
	double* score = new double[size];
	char* grade = new char[size];

	// TODO: วนรับข้อมูล
	for (int i = 0; i < size; i++)
	{
		cout << "Enter student  name: ";
		getline(cin, name[i]);

		cout << "Enter student id: ";
		getline(cin, id[i]);

		cout << "Enter student score: ";
		cin >> score[i];
		cin.ignore();

		// TODO: calculateGrade(score[i], grade[i]);
		calculateGrade(score[i], grade[i]);
	}

	// TODO: วนแสดงผล size คน ด้วย displayStudentInfo
	for (int i = 0; i < size; i++)
	{
		displayStudentInfo(name[i], id[i], score[i], grade[i]);
	}

	// TODO: delete[] ให้ครบทุกตัวแปร
	delete[] name;
	delete[] id;
	delete[] score;
	delete[] grade;

	return 0;
}