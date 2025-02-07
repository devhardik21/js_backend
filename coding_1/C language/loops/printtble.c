#include<stdio.h>
int main ()
{
    int x,y;
    printf("enter ur number :");
    scanf("%d",&y);
    for(x=1;x<y*10; x=x++){
        if(x%y==0){
            printf("%d ",x);

    }
}
return 0;
}