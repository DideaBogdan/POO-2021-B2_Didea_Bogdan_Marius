#pragma once

#include "Car.h"

class Dacia : public Car
{
	virtual int Fuel() override;
	virtual int FuelConsumption() override;
	virtual int AverageSpeed(Weather w)  override;
	virtual const char* Name() override;
};

