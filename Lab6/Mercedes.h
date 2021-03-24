#pragma once

#include "Car.h"

class Mercedes: public Car
{
	int Fuel() override;
	int FuelConsumption() override;
	int AverageSpeed(Weather w)  override;
	const char* Name() override;
};

