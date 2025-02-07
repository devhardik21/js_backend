#include<iostream>
using namespace std; 
void fun(int &x){
x = x+ 10 ;
}
int main(){
int a = 10 ; 
int &b = a ; 
int c = 15 ; 
a++ ; 
cout<<"value of a is  : "<<a<<endl ;
cout<<"value of b is  : "<<b<<endl ;
b++ ;
cout<<"value of a is  : "<<a<<endl ;
cout<<"value of b is  : "<<b<<endl ;
cout<<"value of c before is:"<<c<<endl ;
fun(c) ; 
cout<<"value of c after function is:"<<c<<endl ;





}