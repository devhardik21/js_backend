#include<stdio.h>
int main ()
{
    int n;
    for(int i=1;i<=4;i++){
        for(int p=1;p<=i;p++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}