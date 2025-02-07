#include<iostream>
using namespace std;
int main(){
int i = 10 ; 
int *p = &i ; 
int **p2 = &p ; 
cout<<"value of  i : "<<i<<endl ; 
cout<<"address of  i : "<<&i<<endl ;
cout<<"value of  p : "<<p<<endl ;
cout<<"address of  p : "<<&p<<endl ;
cout<<"value of   **p2 : "<<&p<<endl ;
cout<<"address of  **p2 : "<<&p2<<endl ;
cout<<"value of i using double ptr: "<<**p2<<endl ;





}