#include<stdio.h>
int main ()
{
    int n;
    printf("enter ur number :");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        } 
        printf("\n");
        nsp = nsp-1;
        nst= nst+2;
    }
    return 0;
    }