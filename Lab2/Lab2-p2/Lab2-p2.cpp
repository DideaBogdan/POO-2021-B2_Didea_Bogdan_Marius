#include "Student.h"

Student stud[20];

int CmpName(int a, int b)
{
	if (strcmp(stud[a].Name(), stud[b].Name()) > 0) return 1;
	if (strcmp(stud[a].Name(), stud[b].Name()) == 0) return 0;
	return -1;
}


int CmpMath(int a, int b)
{
	if (stud[a].Math() > stud[b].Math()) return 1;
	if (stud[a].Math() == stud[b].Math()) return 0;
	return -1;
}

int CmpEnglish(int a, int b)
{
	if (stud[a].English() > stud[b].English()) return 1;
	if (stud[a].English() == stud[b].English()) return 0;
	return -1;
}

int CmpHistory(int a, int b)
{
	if (stud[a].History() > stud[b].History()) return 1;
	if (stud[a].History() == stud[b].History()) return 0;
	return -1;
}

int CmpAverage(int a, int b)
{
	if (stud[a].Average() > stud[b].Average()) return 1;
	if (stud[a].Average() == stud[b].Average()) return 0;
	return -1;
}



int main()
{
	
	int n;
	cout << "Insert your number of students:\n";
	cin >> n;
	for(int i = 1; i <= n; i++)
		stud[i].Init();
	cout << "MENIU \n0.END \n1.Compare name \n2.Compare math \n3.Compare english \n4.Compare history \n5.Compare average \n6.Print a student \n";
	int x, y, z;
	cin >> x;
	while (x != 0)
	{
		switch (x)
		{
		case 1:
		{
			int a, b;
			cout << "Insert students to be compared (their index): \n";
			cin >> a >> b;
			if (CmpName(a, b) == 1) cout << "First student has bigger name. \n";
			if (CmpName(a, b) == 0) cout << "Students have the same name. \n";
			if (CmpName(a, b) == -1) cout << "Second student has bigger name. \n";
			
			break;
		}	
		case 2:
		{
			int a, b;
			cout << "Insert students to be compared (their index): \n";
			cin >> a >> b;
			if (CmpMath(a,b) == 1) cout << "First student has bigger mark. \n";
			if (CmpMath(a,b) == 0) cout << "Students have the same mark. \n";
			if (CmpMath(a,b) == -1) cout << "Second student has bigger mark. \n";
			break;
		}
		case 3:
		{
			int a, b;
			cout << "Insert students to be compared (their index): \n";
			cin >> a >> b;
			if (CmpEnglish(a,b) == 1) cout << "First student has bigger mark. \n";
			if (CmpEnglish(a,b) == 0) cout << "Students have the same mark. \n";
			if (CmpEnglish(a,b) == -1) cout << "Second student has bigger mark. \n";
			break;
		}
		case 4:
		{
			int a, b;
			cout << "Insert students to be compared (their index): \n";
			cin >> a >> b;
			if (CmpHistory(a, b) == 1) cout << "First student has bigger mark. \n";
			if (CmpHistory(a, b) == 0) cout << "Students have the same mark. \n";
			if (CmpHistory(a, b) == -1) cout << "Second student has bigger mark. \n";
			break;
		}
		case 5:
		{
			int a, b;
			cout << "Insert students to be compared (their index): \n";
			cin >> a >> b;
			if (CmpAverage(a, b) == 1) cout << "First student has bigger mark. \n";
			if (CmpAverage(a, b) == 0) cout << "Students have the same mark. \n";
			if (CmpAverage(a, b) == -1) cout << "Second student has bigger mark. \n";
			break;
		}
		case 6:
			int i;
			cout << "Insert student to be printed(his index) : \n";
			cin >> i;
			stud[i].Print();
		}
		cin >> x;
	}
	return 0;

}

