#include<stdio.h>
int main ()
{
 float r ;
 printf("the radius of the sphere is : ");
 scanf("%f",&r);
 float volume = 4/3*3.14*r*r*r;
 printf("the volume of sphere is: %f",volume);
 return 0 ;
}