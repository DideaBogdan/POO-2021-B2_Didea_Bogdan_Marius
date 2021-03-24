#include "Mazda.h"

int Mazda::Fuel()
{
	return 70;
}

int Mazda::FuelConsumption()
{
	return 8;
}

int Mazda::AverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 50;
	if (w == Weather::Rain)
		return 80;
	if (w == Weather::Sunny)
		return 120;
}

const char* Mazda::Name()
{
	return "Mazda";
}