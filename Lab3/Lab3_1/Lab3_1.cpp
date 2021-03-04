#include "Math.h"

int main()
{
	//Add
	int x, y, z;
	cout << "Insert two numbers: ";
	cin >> x >> y;
	cout<<"Sum of the two numbers is: " << Math::Add(x, y)<<"\n";
	cout << "Insert three numbers: ";
	cin >> x >> y >> z;
	cout << "Sum of the three numbers is: " << Math::Add(x, y, z) << "\n";
	double a, b, c;
	cout << "Insert two numbers: ";
	cin >> a >> b;
	cout << "Sum of the two numbers is: " << Math::Add(a, b) << "\n";
	cout << "Insert three numbers: ";
	cin >> a >> b >> c;
	cout << "Sum of the three numbers is: " << Math::Add(a, b, c) << "\n";
	//Mul
	cout << "Insert two numbers: ";
	cin >> x >> y;
	cout << "Mul of the two numbers is: " << Math::Mul(x, y) << "\n";
	cout << "Insert three numbers: ";
	cin >> x >> y >> z;
	cout << "Mul of the three numbers is: " << Math::Mul(x, y, z) << "\n";
	cout << "Insert two numbers: ";
	cin >> a >> b;
	cout << "Mul of the two numbers is: " << Math::Mul(a,b) << "\n";
	cout << "Insert three numbers: ";
	cin >> a >> b >> c;
	cout << "Mul of the three numbers is: " << Math::Mul(a, b, c) << "\n";
	///Add with count
	cout << Math::Add(4, 200, 340, 560, 130) << "\n";
	//Add with const char *
	const char* n = "3";
	const char* m = "4";
	cout<<*Math::Add(n, m);
	return 0;
}

