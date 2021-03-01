#pragma once

#include <iostream>
using namespace std;

class Student
{
private:
	char name[50];
	float math;
	float engl;
	float hist;
	float average;
public:
	void Init();
	void Print();
	void Name(Student stud1, Student stud2);
	void Math(Student stud1, Student stud2);
	void English(Student stud1, Student stud2);
	void History(Student stud1, Student stud2);
	void Average(Student stud1, Student stud2);
};

