#include "Student.h"

int main()
{
	Student stud[20];
	int n;
	cout << "Insert your number of students:\n";
	cin >> n;
	for(int i = 1; i <= n; i++)
		stud[i].Init();

	return 0;

}

