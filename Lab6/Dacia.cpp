#include "Dacia.h"

int Dacia::Fuel()
{
	return 40;
}

int Dacia::FuelConsumption()
{
	return 10;
}

int Dacia::AverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 40;
	if (w == Weather::Rain)
		return 60;
	if (w == Weather::Sunny)
		return 90;
}

const char* Name()
{
	return "Dacia";
}