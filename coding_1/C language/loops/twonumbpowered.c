#include<stdio.h>
int main ()
{
    int a,b;
    a=2;
     printf("enter your number b:");
    scanf("%d",&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*2;
        printf("the value when 2 is raised to power %d is: %d \n",i,p);
    }
    return 0;
}