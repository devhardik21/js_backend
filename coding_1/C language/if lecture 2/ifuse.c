#include<stdio.h>
int main ()
{
    int x;
    printf("enter your number : ");
    scanf("%d",&x);
    if(x%2 ==0)
    { 
        printf("the number is even");
    }
    if(x%2!= 0)
    {
        printf("the number is odd");
    }
    return 0;
}