#include "NumberList.h"

int main()
{
    NumberList nl;
    nl.Init();
    int x;
    cin >> x;
    while (nl.Add(x) == true)
        cin >> x;
    nl.Sort();
    nl.Print();
    return 0;
 }
