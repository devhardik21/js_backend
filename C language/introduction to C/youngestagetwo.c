#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter age of a :");
    scanf("%d",&a);
     printf("enter age of b :");
    scanf("%d",&b);
     printf("enter age of c :");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("a is youngest");
    }
    if(b<a && b<c){
        printf("b is the youngest");
    }
    if(c<a && c<b){
        printf("c is the youngest");
    }
    return 0;
    

}