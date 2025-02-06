#include<stdio.h>
int main (){
    int x ;
    printf("enter your number:");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("the number is a three digit number :");
    }
    else{
        printf("the number is not a three digit number,it misses by %d",100-x);
    }
    return 0;
    }