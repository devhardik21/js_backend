#include<stdio.h>
int main ()
{
    int sp,cp;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("enter selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        printf("the seller is in profit");
    }
    else{
        
        printf("the seller is in loss by %d", cp-sp);
    }
return 0 ;
}