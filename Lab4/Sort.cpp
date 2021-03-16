#include "Sort.h"

Sort::Sort(int n1, int n2, int n3, int n4)
{
	count = 4;
	v[0] = n1;
	v[1] = n2;
	v[2] = n3;
	v[3] = n4;
}

Sort::Sort(int n, int min, int max)
{
	int i = 0;
	while (i < n)
	{
		v[i] = rand() % (max - min + 1) + min;
		i++;
	}
	count = n;
}

Sort::Sort(int a[], int n)
{
	for (int i = 0; i < n; i++)
		v[i] = a[i];
	count = n;
}

Sort::Sort(int n, ...)
{
	va_list ls;
	va_start(ls, n);
	for (int i = 0; i < n; i++)
		v[i] = va_arg(ls, int);
	count = n;
	va_end(ls);
}

Sort::Sort(char string[])
{
	char* p;
	count = 0;
	p = strtok(string, ",");
	while (p != NULL)
	{
		int number = 0, i=0;
		while (p[i] != NULL)
		{
			number = number * 10 + (p[i] - '0');
			i++;
		}
		v[count++] = number;
		p = strtok(NULL, ",");
	}
}

void Sort::InsertSort(bool ascendent)
{
	if (ascendent == true)
	{
		int i, j, key;
		for (i = 1; i < count; i++)
		{
			key = v[i];
			j = i - 1;
			while (j >= 0 && key < v[j])
			{
				v[j + 1] = v[j];
				j = j - 1;
			}
			v[j + 1] = key;
		}
	}
	else
	{
		int i, j, key;
		for (i = 1; i < count; i++)
		{
			key = v[i];
			j = i - 1;
			while (j >= 0 && key > v[j])
			{
				v[j + 1] = v[j];
				j = j - 1;
			}
			v[j + 1] = key;
		}

	}
}



void Sort::QuickSort(bool ascendent)
{
	if (ascendent == true)
	{

	}
	else
	{

	}
}

void Sort::BubbleSort(bool ascendent)
{
	if (ascendent == true)
	{
		int i, j, aux;
		for (i = 0; i < count - 1; i++)
			for (j = i + 1; j < count; j++)
				if(v[i]>v[j])
				{
					aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
	}
	else
	{
		int i, j, aux;
		for (i = 0; i < count - 1; i++)
			for (j = i + 1; j < count; j++)
				if (v[i] < v[j])
				{
					aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}

	}

}

void Sort::Print()
{
	for (int i = 0; i < count; i++)
		cout << v[i] << " ";
}

int Sort::GetElementsCount()
{
	return count;
}

int Sort::GetElementFromIndex(int index)
{
	return v[index];
}