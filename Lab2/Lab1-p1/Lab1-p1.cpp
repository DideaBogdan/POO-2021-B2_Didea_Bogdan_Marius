#include "NumberList.h"

int main()
{
    NumberList nl;
    nl.Init();
    int n, x, a;
    int full = 0;
    cout << "MENIU \n0.END \n1.Add n numbers. \n2.Sort. \n3.Print. \n";
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 0:
            break;
        case 1:
            cout << "Insert how many numbers you want to add: ";
            cin >> n;
            cout << "Insert the numbers: ";
            for (int i = 1; i <= n ; i++)
            {
                cin >> a;
                if(full==0)
                    if (nl.Add(a) == false) full = 1;
            }
            break;
        case 2:
            nl.Sort();
            cout << "\nThe numbers have been sorted. \n";
            break;
        case 3:
            cout << "\nThe vector is: ";
            nl.Print();
            cout << "\n";
            break;
        }
        cin >> x;
    }
    return 0;
 }
