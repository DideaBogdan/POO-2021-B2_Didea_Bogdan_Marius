#include "NumberList.h"

int main()
{
    NumberList nl;
    nl.Init();
    int x;
    do
    {
        cin >> x;
    } while (nl.Add(x) == true);
    nl.Sort();
    nl.Print();
    return 0;
 }
