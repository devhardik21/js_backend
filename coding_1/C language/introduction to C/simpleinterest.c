#include<stdio.h>
int main ()
{
    float p,r,t,si;
    printf("the principal amount is :");
    scanf("%f",&p);
    printf("the rate of interest is :");
    scanf("%f",&r);
    printf("the time  is :");
    scanf("%f",&t);
     si=(p*r*t)/100;
    printf("yours simple interest is: %f",si);
    return 0;
}
