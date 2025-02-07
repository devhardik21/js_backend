#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter your first number:");
    scanf("%d",&a);
    printf("enter your second number:");
    scanf("%d",&b);
    printf("enter your third number:");
    scanf("%d",&c);
    if(a>b){
        {
            if(a>c){
            printf("a is the greatest number");}

            else{
                printf("c is the greatest number");
            }
        }
    }
    else{ 
    if(b>c){
    printf("b is the biggest");
    } 
    else{
    printf("c is the biggest");
    }
    
    return 0;
    }
}
