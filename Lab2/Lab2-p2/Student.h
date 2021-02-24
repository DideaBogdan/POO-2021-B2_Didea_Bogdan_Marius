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
public:
	void Init();
	void Print();
	void CmpName(char name1[], char name2[]);
	void Math(int math1,int math2);
	void English(int engl1, int engl2);
	void History(int hist1, int hist2);
	void CmpAverage(double av1, double av2);
};

