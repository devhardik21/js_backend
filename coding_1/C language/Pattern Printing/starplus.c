#include<stdio.h>
int main ()
{
    int n ;
    printf("enter your number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int m = (n/2)+1 ;
            if(i==m || j==m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}