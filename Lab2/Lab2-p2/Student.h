#pragma once

#include <iostream>
#include <string.h>
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
	char* Name();
	float Math();
	float English();
	float History();
	float Average();
};

