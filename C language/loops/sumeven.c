#include<stdio.h>
int main ()
{
    int n,ld,sum;
    printf("enter ur number :");
    scanf("%d ",&n);
    sum = 0;
    ld= 0;
    while(n>0){
        ld=(n%10);
        if((ld%2)==0){
        sum= ld +sum ;
         }
         n=n/10;
         }
         printf("the sum of the numbers is : %d",sum);
         return 0;
    }
