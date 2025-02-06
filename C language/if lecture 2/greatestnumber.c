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
    if(a>b && b>c){
        printf("a is the biggest number");
        }
        if(b>c && c>a){
            printf("b is the biggest number ");
        }
    if(c>a && a>b){
         printf("c is the biggest number ");
    }
    return 0;
}
