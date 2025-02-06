#include<stdio.h>
int main ()
{
    int x;
    printf("enter your number :");
    scanf("%d",&x);
    x>99 && x<999 ? printf("three digit number") : printf("not a three digit") ;
    return 0;
}