#include<stdio.h>
int main ()
{
    //1,1,2,3,5,8,13,21,34
    int n;
    printf("enter your number :");
    scanf("%d",&n);
    int a=1,b=1;
    int sum=1; //the reason for this is agar n=1/2 daal du to uski value 1 ho..that is also true according to fibonacci sequence
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth term of fibonacci sequence is :%d",n,sum);
    
}