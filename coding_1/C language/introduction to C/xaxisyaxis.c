#include<stdio.h>
int main ()
{
    int x,y;
    printf("enter your x co ordinate :");
    scanf("%d",&x);
    printf("enter your y co ordinate :");
    scanf("%d",&y);
    if(x!=0 && y==0){
        printf("lies on x axis");
    }
    else if(x==0 && y!=0){
        printf(" lies on y axis");
    }
    else{
        if(x==0 && y==0){
            printf("lies on orgin");
        }
        else{
            printf("lies on x-y plane");
        }
    }
    return 0;

}