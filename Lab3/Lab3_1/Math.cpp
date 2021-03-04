#include "Math.h"

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return x + y;
}

int Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double x, double y)
{
	return x * y;
}

int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	va_list lista;
	int sum = 0;
	va_start(lista, count);
	for (int i = 0; i < count; i++)
		sum = sum + va_arg(lista, int);
	va_end(lista);
	return sum;
}

char* Math::Add(const char* n, const char* m)
{
	if (n == nullptr || m == nullptr)
		return nullptr;
	
	int x = atoi(n);
	int y = atoi(m);
	int rez = x + y;
	char p[50];
	sprintf(p, "%d", rez);
	return (char *)p;
}
