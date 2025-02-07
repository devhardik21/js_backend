#include<stdio.h>
int main ()
{
    int n;
    printf("enter ur number :");
    scanf("%d",&n);
    int nnms=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int k=1;k<=nnms;k++){
          int  d= 64 + k;
           char ch = (char)d;
            printf("%c",ch);
        }
        nnms=nnms +2;
        printf("\n");
    }
    return 0;
}