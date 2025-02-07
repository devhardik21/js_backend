#include<stdio.h>
int main ()
{
    int x,n,count;
    printf("enter your number :");
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        int f= n%x;
        if(f==0 ){
           count++;
            
        }
       
        }
        if(count==2){
            printf("prime number");
        }
        else{
            printf("composite number");
        }

    
    return 0;
}
