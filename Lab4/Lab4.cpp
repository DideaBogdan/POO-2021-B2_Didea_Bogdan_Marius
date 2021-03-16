#include "Sort.h"

int main()
{
    cout << "Insert 4 numbers(Initialization list): ";
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    Sort v1(n1,n2,n3,n4);
    int x;
    cout << "0.End \n1.Insert sort descendent. \n2.Quick Sort. \n3.BubbleSort ascendent \n4.Print \n5.Get element count \n6.Get element from index\n";
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 1:
            v1.InsertSort(false);
            break;
            //case 2:
              //  v1.QuickSort();
               // break;
        case 3:
            v1.BubbleSort(true);
            break;
        case 4:
            v1.Print();
            break;
        case 5:
            cout << "Element count is :" << v1.GetElementsCount() << "\n";
            break;
        case 6:
            int index;
            cout << "Insert index: ";
            cin >> index;
            cout<<v1.GetElementFromIndex(index);
            break;
        }
        cin >> x;
    }
}

