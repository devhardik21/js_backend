#include<stdio.h>
int main ()
{
    int n,r;
    printf("enter your number :");
    scanf("%d",&n);
    int m=n;
    r=0;
    while(n>0){
    int ld;
        ld=n%10;
        r=r*10;
        r=r+ld;
        n=n/10;
    }
    int sum=r+m;
    printf("the reversed number is %d",r);
    printf("the sum is:%d",sum);
    return 0;
}