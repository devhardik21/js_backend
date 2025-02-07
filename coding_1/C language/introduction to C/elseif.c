#include<stdio.h>
int main ()
{
    int x ;
    printf("enter your percentage :");
    scanf("%d",&x);
    if(x>80){
        printf("A GRADE");
    }
    else if(x>60){
        printf("B GRADE");
    }
    else if(x>40){
        printf("C GRADE");
    }
    else if(x<40){
        printf("fail");
    }


return 0;}