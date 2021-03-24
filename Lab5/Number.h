#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

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
	//friend char operator+ (Number n1, Number n2);
	void SwitchBase(int newBase);
	void Print();
	//int GetDigitsCount();
	//int GetBase();
};

