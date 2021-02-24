#include "Student.h"

void Student::Init()
{
	cout << "Insert name :\n";
	cin >> name;
	cout << "Insert math grade:\n";
	cin >> math;
	while (math < 1 || math > 10)
	{
		cout << "Wrong input, insert a number between 1 and 10 \n";
		cin >> math;
	}
	cout << "Insert english grade:\n";
	cin >> engl;
	while (engl < 1 || engl > 10)
	{
		cout<< "Wrong input, insert a number between 1 and 10 \n";
		cin >> engl;
	}
	cout << "Insert history grade:\n";
	cin >> hist;
	while (hist < 1 || hist > 10)
	{
		cout<< "Wrong input, insert a number between 1 and 10 \n";
		cin >> hist;
	}

}

void Student::Print()
{
	cout << "Name: " << name << "; Math: " << math << "; English: " << engl << "; History: " << hist;
}
