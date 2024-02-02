#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    if (age < 5)
    {
        printf("Ticket price is free");
    }
    else if (age >= 5 && age <= 12)
    {
        printf("Ticket price is 20rs");
    }
    else if (age >= 13 && age <= 59)
    {
        printf("Ticket price is 50rs");
    }
    else
    {
        printf("Ticket price is 40rs");
    }
}