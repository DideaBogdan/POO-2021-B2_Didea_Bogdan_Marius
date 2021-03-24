#pragma once

#include "Car.h"


class Circuit
{
	int dimensiune;
	Weather vreme;
	Car* cars[100];
	int nmbcars;
public:
	void SetLength(int l);
	void SetWeather(Weather w);
	void AddCar(Car* m);
	void Race();
	int Time(Car* m);
	void ShowFinalRanks();
	void ShowWhoDidNotFinis();
	Circuit();

};

