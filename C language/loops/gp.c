#include<stdio.h>
int main ()
{
    // 1,2,4,8,16,32,64
    int x,n;
    printf("enter your no. of term :");
    scanf("%d",&n);
    int a=3;
    for(x=1;x<=n;x++){
        printf("%d ",a);
        a=4*a;
    }
    return 0;
}