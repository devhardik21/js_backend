#include<stdio.h>
int main ()
{
    for(int i=97;i<=122;i++){
        char ch=(int)i;
        printf("%c -->",ch);
        printf("%d \n",i);
    }
    return 0;
}