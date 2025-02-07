#include<stdio.h>
int main ()
{//1,1,2,3,5,8,13,21,34
    int n;
    printf("enter your number");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("the fibonacci number of %dth number is : %d \n",i+2,sum);
    }
    return 0;
}