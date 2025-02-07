#include<stdio.h>
int main ()
{
    int x,n;
    printf("enter the number of terms :");
    scanf("%d",&n);
    for(x=4;x<=3*n+1;x=x+3){
        printf("%d ",x);
    }
    return 0;
}