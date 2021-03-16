#include "Sort.h"

int main()
{
    /*
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
    cout << "\nInsert count, a min and a max: ";
    int count, min, max;
    cin >> count >> min >> max;
    Sort v2(count, min, max);
    cout << "0.End \n1.Insert sort descendent. \n2.Quick Sort. \n3.BubbleSort ascendent \n4.Print \n5.Get element count \n6.Get element from index\n";
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 1:
            v2.InsertSort(false);
            break;
            //case 2:
              //  v2.QuickSort();
               // break;
        case 3:
            v2.BubbleSort(true);
            break;
        case 4:
            v2.Print();
            break;
        case 5:
            cout << "Element count is :" << v2.GetElementsCount() << "\n";
            break;
        case 6:
            int index;
            cout << "Insert index: ";
            cin >> index;
            cout << v2.GetElementFromIndex(index);
            break;
        }
        cin >> x;
    }
    cout << "\nInsert count and elements:";
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Sort v3(a, n);
    cout << "0.End \n1.Insert sort descendent. \n2.Quick Sort. \n3.BubbleSort ascendent \n4.Print \n5.Get element count \n6.Get element from index\n";
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 1:
            v3.InsertSort(false);
            break;
            //case 2:
              //  v3.QuickSort();
               // break;
        case 3:
            v3.BubbleSort(true);
            break;
        case 4:
            v3.Print();
            break;
        case 5:
            cout << "Element count is :" << v3.GetElementsCount() << "\n";
            break;
        case 6:
            int index;
            cout << "Insert index: ";
            cin >> index;
            cout << v3.GetElementFromIndex(index);
            break;
        }
        cin >> x;
    }
    Sort v4(5, 9, 56, 90, 41, 29);
    cout << "0.End \n1.Insert sort descendent. \n2.Quick Sort. \n3.BubbleSort ascendent \n4.Print \n5.Get element count \n6.Get element from index\n";
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 1:
            v4.InsertSort(false);
            break;
            //case 2:
              //  v4.QuickSort();
               // break;
        case 3:
            v4.BubbleSort(true);
            break;
        case 4:
            v4.Print();
            break;
        case 5:
            cout << "Element count is :" << v4.GetElementsCount() << "\n";
            break;
        case 6:
            int index;
            cout << "Insert index: ";
            cin >> index;
            cout << v4.GetElementFromIndex(index);
            break;
        }
        cin >> x;
    }
    */
    char sir[200];
    cout << "\nInsert a string with numbers separated by commas: ";
    cin.getline(sir, 200);
    Sort v5(sir);
    v5.Print();
    cin.get();
    cout << "0.End \n1.Insert sort descendent. \n2.Quick Sort. \n3.BubbleSort ascendent \n4.Print \n5.Get element count \n6.Get element from index\n";
    int x;
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 1:
            v5.InsertSort(false);
            break;
            //case 2:
              //  v5.QuickSort();
               // break;
        case 3:
            v5.BubbleSort(true);
            break;
        case 4:
            v5.Print();
            break;
        case 5:
            cout << "Element count is :" << v5.GetElementsCount() << "\n";
            break;
        case 6:
            int index;
            cout << "Insert index: ";
            cin >> index;
            cout << v5.GetElementFromIndex(index);
            break;
        }
        cin >> x;
    }
}

