#include <stdio.h>
int main(){
    float a,b;
    int n;
    printf("Enter two numbers");
    scanf("%f %f",&a,&b);
    printf("Enter 1 add two numbers\n");
    printf("Enter 2 subtract two numbers\n");
    printf("Enter 3 divide two numbers\n");
    printf("Enter 4 multiply two numbers\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("The addition of the two numbers is %d",a+b);
        break;
    case 2: 
        printf("The subtraction of the two numbers is %d",a-b);
        break;
    case 3:
        printf("The division of the two numbers is %f",a/b);
        break;
    case 4:
        printf("The multiplication of the two numbers is %d",a*b);
        break;
    default:
        printf("Invalid input");
        break;
    }
}
