#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int x = n % 2;
    switch (x)
    {
    case 1:
        printf("It is an odd number");
        break;

    default:
        printf("It is an even number");
        break;
    }
}