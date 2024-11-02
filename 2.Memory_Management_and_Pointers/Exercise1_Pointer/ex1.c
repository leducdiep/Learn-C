#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value of integer: %d\n", a);
    printf("Address of integer: %p\n", (void*)ptr);
    printf("Value of integer using pointer: %d\n", *ptr);

}