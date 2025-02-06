#include<iostream>
using namespace std;
void swap(int a , int b){
    int temp ; 
    temp = a ; 
    a = b ; 
    b = temp ; 

} 
void swapptr(int *a ,int *b){
int temp = *a ;
 *a = *b;
 *b = temp ; 
}
int main(){
int a = 5 ; 
int b = 10 ; 
cout<<"value of a and b before is   "<<   a <<   b  <<endl ;
swap(a,b);
cout<<"value of a and b after is  "<<a <<  b<<endl ;
cout<<"value of a and b before is  "<<a  <<  b  <<endl ;
swapptr(&a,&b);
cout<<"value of a and b after is  "<<a  <<  b    <<endl ;





}