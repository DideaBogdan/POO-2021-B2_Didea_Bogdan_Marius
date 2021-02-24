#include "NumberList.h"

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	count = count + 1;
	numbers[count] = x;
	if (count >= 10) return false;
	else return true;
}

void NumberList::Sort()
{
	int i, j, aux;
	for(i = 1; i < count; i++)
		for(j = i+1; j <= count; j++)
			if (numbers[i] >= numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print()
{
	for (int i = 1; i <= count; i++)
		cout << numbers[i] << " ";
}