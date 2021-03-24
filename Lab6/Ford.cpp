#include "Ford.h"

int Ford::Fuel()
{
	return 50;
}

int Ford::FuelConsumption()
{
	return 11;
}

int Ford::AverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 30;
	if (w == Weather::Rain)
		return 60;
	if (w == Weather::Sunny)
		return 100;
}

const char* Ford::Name()
{
	return "Ford";
}