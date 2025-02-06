#include<stdio.h>
int main ()
{
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    int fact =1;
    while(n>0){
        fact=fact*n;
        n=n--;
    }
    printf(" the factorial of the number is : %d",fact);
    return 0;
}