#include "Mercedes.h"

int Mercedes::Fuel()
{
	return 60;
}

int Mercedes::FuelConsumption()
{
	return 13;
}

int Mercedes::AverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 30;
	if (w == Weather::Rain)
		return 80;
	if (w == Weather::Sunny)
		return 140;
}

const char* Mercedes::Name()
{
	return "Mercedes";
}
