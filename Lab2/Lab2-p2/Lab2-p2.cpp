#include "Student.h"




int main()
{
	Student stud[20];
	int n;
	cout << "Insert your number of students:\n";
	cin >> n;
	for(int i = 1; i <= n; i++)
		stud[i].Init();
	cout << "MENIU \n0.END \n1.Compare name \n2.Compare math \n3.Compare english \n4.Compare history \n5.Compare average \n";
	int x;
	int i=0;
	cin >> x;
	/*while (x != 0)
	{
		cin >> x;
		switch (x)
		{
		case 1:

			stud[i].Name();
		case 2:
			stud[i].Math();
		case 3:
			stud[i].English();
		case 4:
			stud[i].History();
		case 5:
			stud[i].Average();
		}
	}
	*/
	for (int i = 1; i <= n; i++)
		stud[i].Print();
	return 0;

}

