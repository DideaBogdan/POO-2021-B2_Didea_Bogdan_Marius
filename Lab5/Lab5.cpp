#include "Number.h"

Number Get(Number n)
{
	return n;
}

int main()
{
	Number d("3", 10);
	d.Print();
	d.SwitchBase(2);
	return 0;
}
