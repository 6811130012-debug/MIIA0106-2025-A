// LAB603.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateGrade(double total, char& grade)
{
	if (total >= 80) grade = 'A';
	else if (total >= 70) grade = 'B';
	else if (total >= 60) grade = 'C';
	else if (total >= 50) grade = 'D';
	else grade = 'F';
}

void displayStudentInfo(string name, string id, double total, char grade)
{
	cout << "\nStudent Name: " << name << endl;
	cout << "Student ID : " << id << endl;
	cout << fixed << setprecision(2);
	cout << "Score : " << total << endl;
	cout << "Grade : " << grade << endl;
}

int main()
{
	const int N = 3; // students
	const int M = 4; // subjects

	string name[N], id[N];
	double score[N][M];
	double total[N];
	char grade[N];

	// TODO: วนรับ name/id
	for (int i = 0; i < N; i++)
	{
		cout << "Enter student name: ";
		getline(cin >> ws, name[i]);

		cout << "Enter student id: ";
		getline(cin, id[i]);
	}

	// TODO: nested loop รับคะแนน M วิชา + รวม total[i]
	for (int i = 0; i < N; i++)
	{
		total[i] = 0.0;
		for (int j = 0; j < M; j++)
		{
			cout << "Enter student score" << j + 1 << ": ";
			cin >> score[i][j];
			total[i] += score[i][j];
		}

		// TODO: calculateGrade(total[i], grade[i]);
		calculateGrade(total[i], grade[i]);
	}

	// TODO: แสดงผลโดยใช้ displayStudentInfo
	for (int i = 0; i < N; i++)
	{
		displayStudentInfo(name[i], id[i], total[i], grade[i]);
	}

	return 0;
}