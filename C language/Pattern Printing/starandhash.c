 #include<stdio.h>
 //code is correct...not working on vs code
 int main ()
 {
    for(int i=i;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==3 || j==3){
            printf("*");
            }
            else {
            printf("#");}
        }
        printf("\n");
    }
    return 0;
 }