#include<stdio.h>
int main ()
{
    int x;
    printf("enter your number :");
    scanf("%d",&x);
    if(x%5==0 && x%3==0){
        printf("the number is divisible by both 5 and 3");
    }
    else{
        printf("the number isnt divisible by 5 and 3");
    }
}