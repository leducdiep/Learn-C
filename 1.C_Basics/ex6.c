#include <stdio.h>

int main()
{
    int Celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%d",&Celsius);
    printf("Temperature in Fahreheit: %d", (Celsius*9/5)+32);

    return 0;
}