#include<iostream>
using namespace std; 
int main(){
new int ;
int *p = new int ; 
cout<<"value at memory allocated before :"<<*p<<endl ; 
*p = 15 ; 
cout<<"value at memory allocated after :"<<*p<<endl ; 

}