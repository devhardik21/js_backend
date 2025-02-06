#include<stdio.h>
int main ()
{
    int n;
  printf("enter your number :");
  scanf("%d",&n);
  int sum =0;
  while(n>0){
    
    sum= (n%10) + sum;
   n =  n/10 ;
  }  
  printf("%d ",sum);
  return 0;
}