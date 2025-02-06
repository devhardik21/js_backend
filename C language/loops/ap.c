#include<stdio.h>
int main ()
{
    int x,n;
    printf("enter ur number:");
    scanf("%d",&n);

    for(x=1;x<((2*n)-1);x=x+2){
        printf("%d ",x);
    }
    return 0;
}