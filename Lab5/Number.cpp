#include "Number.h"

Number::Number(const char* value, int bas)
{
	number = new char[strlen(value) + 1];
	memcpy(number, value, strlen(value) + 1);
	base = bas;
}

Number::~Number()
{
	delete number;
	number = nullptr;
}

Number::Number(const Number& n)
{
	number = new char[strlen(n.number) + 1];
	memcpy(number, n.number, strlen(n.number) + 1);
	base = n.base;
}

Number::Number(Number&& n)
{
	number = n.number;
	n.number = nullptr;
	base = n.base;
}


void Number::Print()
{
	cout << number <<" "<< base << "\n";
}