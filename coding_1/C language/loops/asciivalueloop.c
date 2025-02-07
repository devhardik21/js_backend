#include<stdio.h>
int main ()
{
    for(int i=97;i<=122;i++){
        char ch=(int)i;
        printf("the ascii value is %d and the character associated with it is %c \n",i,ch);
    }
    return 0;
}