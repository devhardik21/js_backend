#include<stdio.h>
int main ()
{
    float n;
    printf("enter your number :");
    scanf("%f",&n);
   float a=100;
    for(int x=1;x<=n;x++){
        printf("%f ",a);
        a= a/2;
    }
    return 0;
}
