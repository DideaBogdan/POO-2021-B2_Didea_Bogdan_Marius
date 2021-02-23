#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int CharToInt(char s[])
{
    int num = 0;
    for (int i = 0; s[i] != NULL; i++)
        num = num * 10 + (s[i] - '0');
    return num;
}

void Sort(char cuvinte[500][500], int nr)
{
    int i, j;
    char aux[500];
    for (i = 0; i < nr - 1; i++)
        for (j = i + 1; j < nr; j++)
            if (strlen(cuvinte[j]) > strlen(cuvinte[i]))
            {
                strcpy(aux, cuvinte[i]);
                strcpy(cuvinte[i], cuvinte[j]);
                strcpy(cuvinte[j], aux);

            }
            else if (strlen(cuvinte[i]) == strlen(cuvinte[j]))
                if (strcmp(cuvinte[j], cuvinte[i]) < 0)
                {
                    strcpy(aux, cuvinte[i]);
                    strcpy(cuvinte[i], cuvinte[j]);
                    strcpy(cuvinte[j], aux);
                }
}

bool isPrime(int n)
{
    for (int tr = 2; tr < n / 2; tr++)
        if ((n % tr) == 0)
            return false;
    return true;
}


int main()
{
    ///Exercitiul 2
    char sir[500], cuvinte[500][500];
    int numar = 0, suma = 0;
    FILE* fl;
    fl = fopen("in.txt", "r +");
    while (fscanf(fl, "%s", &sir) != EOF)
        suma = suma + CharToInt(sir);
    fclose(fl);
    printf("The sum of the numbers in the ini.txt file is: %d", suma);

    ///Exercitiul 3
    printf("\nInsert a sentence to be sorted: ");
    scanf("%[^\n]s", sir);
    char* p;
    int i = 0;
    p = strtok(sir, " ");
    while (p != NULL)
    {
        strcpy(cuvinte[i], p);
        i++;
        p = strtok(NULL, " ");
    }
    Sort(cuvinte, i);
    for (int j = 0; j < i; j++)
        printf("%s\n", cuvinte[j]);

    ///Exercitiul 4

    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else
        std::cout << n << " is NOT prime !";
    return 0;
}
