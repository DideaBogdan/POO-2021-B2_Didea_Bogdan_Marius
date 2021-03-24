#pragma once

#include "Car.h"


class Circuit
{
	int dimensiune;
	Weather vreme;
	Car* cars[100];
	int nmbcars;
public:
	void SetLength(int L);
	void SetWeather(Wheather w);
	void AddCar(Masina* m);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinis();
};

