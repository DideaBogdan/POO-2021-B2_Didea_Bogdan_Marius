#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdarg>
#include <string.h>

using namespace std;

class Sort
{
	int v[100];
	int count;
public:
	Sort(int n1, int n2, int n3, int n4);
	Sort(int n, int min, int max);
	Sort(int a[], int n);
	Sort(int n, ...);
	Sort(char string[]);
	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
};

