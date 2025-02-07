#include<stdio.h>
int main ()
{
    float x;
    printf("enter your number :");
    scanf("%f",&x);
    int y = x;
    printf("the GIF of the desired number is : %d \n",y);
    float p = x-y;
    printf("the fractional part of the number is: %f",p);
    return 0;
}