#include <stdio.h>
int main(){
    int a,sum=0,flag;
    printf("Enter a three digit number");
    scanf("%d",&a);
    a=flag;
    for(int i=1;i<=3;i++){
        int x=a%10;
        sum+=(x*x*x);
        a=a/10;
    }
    if(sum==flag){
        printf("It is an armstrong number");
    }
    else{
        printf("It is not an armstrong number");
    }
}