#include<stdio.h>
int main ()
{
    int x,output;
    printf("enter your number :");
    scanf("%d",&x);
    for(int i=1;i<=10;i++){
        output = x *i;
        printf("%d ",output);
    }
    

return 0;
}