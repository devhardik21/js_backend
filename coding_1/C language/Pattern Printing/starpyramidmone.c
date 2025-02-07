#include<stdio.h>
int main ()
{
    int n;
    printf("enter ur number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int a=1; a<=2*i-1;a++){
            printf("*");
           
        }
        printf("\n");
    }
    return 0;
}