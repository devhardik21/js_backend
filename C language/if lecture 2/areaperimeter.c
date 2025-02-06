#include<stdio.h>
int main ()
{
    int l,b,a,p;
    
    printf("enter the value of l :");
    scanf("%d",&l);
    printf("enter the value of b :");
    scanf("%d",&b);
    a = l*b;
    p= 2*(l+b);
    if(a>p){
        printf("the area is bigger than  perimeter by: %d",a-p);
    }
if(p>a){
    printf("the perimeter is bigger than area :%d",p-a);
}
if(p==a){
    printf("area = perimeter ");
}
return 0 ;

}
