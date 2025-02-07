#include<stdio.h>
int main ()
{
    int x;
    printf("enter your number :");
    scanf("%d",&x);
    if( x%5==0 || x%3==0 && x%15!=0){
        printf("condition satisfied");

    }
    else{
        printf("condition not satisfied");
    }
    return 0;
}