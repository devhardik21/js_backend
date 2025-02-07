#include<stdio.h>
int main ()
{
    int n,x;
    printf("enter your number :");
    scanf("%d",&n);
    for(x=2;x<=(n-1);x++){
        if(n%x==0){
            printf("composite number \n");
            break;
        }
        else{
            printf("prime number");
            break;
        }
    }
    return 0;
}
       
    
       
