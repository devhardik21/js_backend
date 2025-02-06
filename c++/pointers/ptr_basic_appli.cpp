#include<iostream>
using namespace std ; 
int main(){
    int a = 5;
     cout<<"a before :"<<a<<endl;
    int b = a ; 
     cout<<"b before: "<<b<<endl;
     b++ ; 
     cout<<"b after "<<b<<endl; 
    int *ptr = &a ; 
    cout<<"address of a : "<<ptr<<endl ;

    cout<<"address of b : "<<&b<<endl ;

    cout<<"value of a before modifying pointer(a/*ptr) :"<<a<<endl;
    (*ptr)++;
     cout<<"value of a AFTER modifying pointer(a/*ptr) :"<<a;
    





}