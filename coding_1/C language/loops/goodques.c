#include<stdio.h>
int main ()
{
    int n;
    printf("enter your number :");
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2!=0)
        sum=sum + i;
        else
        sum=sum-i;
    }
    printf("the sum of the series is : %d",sum);
    return 0;
    }

