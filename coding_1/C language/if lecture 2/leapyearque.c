#include<stdio.h>
int main ()
{
    int x;
    printf("enter your year :");
    scanf("%d",&x);
    if(x%4==0){
        printf("the year is a leap year");
         }
         else{
            printf("the year isn't a leap year ");
         }
    return 0;
    }