#include<stdio.h>
int main ()
{
    int x,n;
    printf("enter number of terms : ");
    scanf("%d",&n);
    int a=5;
    for(x=1;x<=n;x++){
        printf("%d ",a);
        a=a+3;
       
    }
    return 0;
}