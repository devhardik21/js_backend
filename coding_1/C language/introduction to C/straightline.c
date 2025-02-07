#include<stdio.h>
int main ()
{
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("enter x1 :");
    scanf("%f",&x1);
    printf("enter y1 :");
    scanf("%f",&y1);
    printf("enter x2 :");
    scanf("%f",&x2);
    printf("enter y2 :");
    scanf("%f",&y2);
    printf("enter x3 :");
    scanf("%f",&x3);
    printf("enter y3 :");
    scanf("%f",&y3);
    m1= (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("the co ordinates are in a straight line");
    }
    else{
        printf("not in a straight line");
    }
    return 0;


}