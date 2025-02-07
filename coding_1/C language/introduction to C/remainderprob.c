#include<stdio.h>
int main ()
{
    int number,divisor,q,r ;
    printf("enter your number:");
    scanf("%d",&number);
    printf("enter your diviser number:");
     scanf("%d",&divisor);
     q = number/divisor;
     printf("the value of q is : %d",q);
     r= number - (divisor*q);
     printf("\n the remainder obtained is : %d",r);
     return 0;
}