#include<stdio.h>
int main ()
{
    int n,ld,r;
    printf("enter your number :");
    scanf("%d",&n);
    ld=0;
    r=0;
    while(n>0){
        ld=n%10;
         r=r*10;
       r=r+ld;
       n= n/10;
    }
    printf("the reversed number is :%d ",r);

}