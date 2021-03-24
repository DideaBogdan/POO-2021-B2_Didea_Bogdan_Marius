#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

class Number
{
	char * number;
	int base;
public:
	Number(const char* value, int bas);
	~Number();
	Number(const Number& n);
	Number(Number &&d);
	//void SwitchBase(int newBase);
	void Print();
	//int GetDigitsCount();
	//int GetBase();
};

