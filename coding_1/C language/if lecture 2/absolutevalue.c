#include<stdio.h>
int main ()
{
    int x;
    printf("enter your integer :");
    scanf("%d",&x);
    if (x>0){
        printf("the absolute value of the integer is %d",x);
    }
    else{
        x=x*(-1);
        printf("the absolute value/GIF is : %d",x);
    }
    return 0;
}