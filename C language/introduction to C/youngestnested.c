#include<stdio.h>
int main ()
{
    int dev,rishi,vipin;
    printf("age of dev");
    scanf("%d",&dev);
    printf("age of rishi");
    scanf("%d",&rishi);
    printf("age of vipin");
    scanf("%d",&vipin);
    if(dev<rishi){
        if(dev<vipin){
            printf("deva is the youngest");
        }else{
            printf("vipin is the youngest");
        }
        }else{
            if(rishi<vipin){
                printf("rishi is the youngest");
            }
            else{
                printf("vipin is the youngest");
            }
        }
  return 0;
    }
    

