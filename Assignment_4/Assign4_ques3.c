#include <stdio.h>
int main(){
    float bal,s;
    printf("Enter the current balance and credit score respectively");
    scanf("%f %f",&bal,&s);
    if(s<600){
        bal=bal+(bal*0.15);
    }
    else if(s>=600 && s<=750){
             bal=bal+(bal*0.12);
    }
    else{
       bal=bal+(bal*0.1);
    }
    printf("The calulated interest is %f",bal);
}