#pragma once

#include <iostream>

using namespace std;

enum Weather
{
	Rain, Sunny, Snow
};

class Car
{
public:
	virtual int Fuel() = 0;
	virtual int FuelConsumption() = 0;
	virtual int AverageSpeed(Weather w) = 0;
	virtual const char* Name() = 0;
};

