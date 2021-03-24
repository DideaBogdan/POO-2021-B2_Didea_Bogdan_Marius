#include "Number.h"

Number Get(Number n)
{
	return n;
}

int main()
{
	Number d("10110010", 2);
	d.Print();
	Number d1 = d;
	d1.Print();
	Number d2 = Get(d1);
	d2.Print();

	return 0;
}
