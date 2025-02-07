#include<stdio.h>
int main ()
{ 
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    int sum = 0;
    if(n%2==0){
        sum= (-n)/2;
        printf("the sum is :%d",sum);
    }
    else{
        sum= n + (-n)/2 ;
        printf("the sum is : %d",sum);
    }
return 0;
}