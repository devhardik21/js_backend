#include<stdio.h>
int main ()
{
    int x,y,n;
    printf("enter ur number :");
    scanf("%d",&n);
     y=0 ;
    for(x=2;x<=(n-1);x++){
        if(n%x==0){
            y=1;
        break ;
        }
    }
    if(y==0){printf("prime number");}
    else{printf("composite number");}
    return 0;
}   