#include<stdio.h>
int main ()
{
    int x=10;
    int y=++x;
    int  z= x++;
    printf("%d \n",y);
    printf("%d \n",z);
    printf("%d \n",x);
    return 0;
}