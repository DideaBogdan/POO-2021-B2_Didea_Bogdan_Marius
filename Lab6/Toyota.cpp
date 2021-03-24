#include "Toyota.h"

int Toyota::Fuel()
{
	return 30;
}

int Toyota::FuelConsumption()
{
	return 7;
}

int Toyota::AverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 30;
	if (w == Weather::Rain)
		return 50;
	if (w == Weather::Sunny)
		return 100;
}

const char* Toyota::Name()
{
	return "Toyota";
}