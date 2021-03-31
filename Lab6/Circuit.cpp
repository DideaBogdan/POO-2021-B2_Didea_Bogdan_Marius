#include "Circuit.h"

Circuit::Circuit()
{
	dimensiune = 0;
	vreme = Weather::Rain;
	nmbcars = 0;
}

void Circuit::SetLength(int l)
{
	dimensiune = l;
}

void Circuit::SetWeather(Weather w)
{
	vreme = w;
}

void Circuit::AddCar(Car* m)
{
	if (nmbcars < 100)
		cars[nmbcars++] = m;
}

int Circuit::Time(Car* m)
{
	int drum = (m->Fuel() / m->FuelConsumption()) * 100;
	if (drum < dimensiune) return 0;
	return dimensiune / m->AverageSpeed(vreme);
}

void Circuit::Race()
{
	Car* aux;
	for(int i=0;i<nmbcars-2;i++)
		for(int j=i+1;j<nmbcars-1;j++)
			if (Time(cars[i]) > Time(cars[j]))
			{
				aux = cars[i];
				cars[i] = cars[j];
				cars[j] = aux;
			}
}

void Circuit::ShowFinalRanks()
{
	cout << "Finished: \n";
	for (int i = 0; i < nmbcars; i++)
		if (Time(cars[i]) != 0)
			cout << cars[i]->Name() << "\n";
}

void Circuit::ShowWhoDidNotFinis()
{
	cout << "Did not finished: \n";
	for (int i = 0; i < nmbcars; i++)
		if (Time(cars[i]) == 0)
			cout << cars[i]->Name() << "\n";
}