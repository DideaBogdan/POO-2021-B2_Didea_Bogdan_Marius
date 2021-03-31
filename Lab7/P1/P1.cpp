#include <iostream>

float operator"" _Kelvin(unsigned long long int x)
{
    return (float)(x - 273.15);
}

float operator"" _Fahrenheit(unsigned long long int x)
{
    return (float)((x - 32)/1.8);
}

int main()
{
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    printf("300 grades in Kelvin is %f grades in Celsius \n120 grades in Fahrenheit is %f grades in Celcius ", a, b);
    return 0;
}
