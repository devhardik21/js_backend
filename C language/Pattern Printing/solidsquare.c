#include<stdio.h>
int main (){
    int row,coloumn ;
    printf("enter number of rows:");
    scanf("%d",&row);
    printf("enter number of col :");
     scanf("%d",&coloumn);
    for(int i=1;i<=row;i++){
        for(int i=1;i<=coloumn;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}