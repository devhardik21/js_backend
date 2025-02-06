#include<stdio.h>
int main ()
{
    int x;
    printf("enter your number:");
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        printf("the number is divisible by either 3 or 5");
    }
    else{
        printf("the number isn't divisible by 3 or 5");
    }
}