#include<stdio.h>
int main ()
{
    int x;
    for(x=1;x<=100;x=x+1){
        if(x%2!=0)
        printf("%d ",x);
    }
    return 0;
}