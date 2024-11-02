#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age < 13)
    {
        printf("You are a Child\n");
    }
    else if((age>=13) && (age<20))
    {
        printf("You are a Teen");
    }
    else 
    {
        printf("You are an Adult");
    }
}