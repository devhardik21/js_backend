#include<stdio.h>
int main ()
{
    int n,count;
    printf("give your number :");
    scanf("%d",&n);
     count=0;
    while(n!=0){
        n=n/10;
        count++ ;
        }
    
    printf("the number of digits are : %d",count);
    return 0;
}