#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void CharToInt(char s[], int &num)
{
	for (int i = 0; s[i] != NULL; i++)
		num = num * 10 + (s[i] - '0');

}

int main()
{
	char sir[100];
	int numar=0;
	FILE* pfile;
	pfile = fopen("in.txt", "r");
	if (pfile != NULL)
	{
		fputs(sir, pfile);
		fclose(pfile);
	}
	CharToInt(sir, numar);
	cout << numar;
	return 0;
}