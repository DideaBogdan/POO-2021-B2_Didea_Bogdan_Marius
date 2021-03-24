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

void Number::SwitchBase(int newBase)
{
	int pow = 1, num10=0, numnew=0;
	for (int i = strlen(number) - 1; i >= 0; i--)
	{
		num10 = num10 + pow * (number[i]-'0');
		pow *= base;
	}
	int count = 1;
	int b, k=0;
	char aux[50]="";
	while (num10 > 0)
	{
		b = num10 % newBase;
		num10 = num10 / newBase;
		if (b >= 0 && b <= 9)
			aux[k] = char(b + '0');
		else
		{
			if (b == 10) aux[k] = 'A';
			if (b == 11) aux[k] = 'B';
			if (b == 12) aux[k] = 'C';
			if (b == 13) aux[k] = 'D';
			if (b == 14) aux[k] = 'E';
			if (b == 15) aux[k] = 'F';
		}
		k++;
	}
	aux[k] = NULL;
	int i;
	for (i = 0; i<=k-1; i++)
		number[i] = aux[k-i-1];
	number[i] = NULL; /// ?
	cout << number;
}


//char operator+(Number n1, Number n2)
//{


//}

void Number::Print()
{
	cout << number <<" "<< base << "\n";
}