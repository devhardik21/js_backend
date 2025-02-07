#include<iostream>
using namespace std; 
int main(){
int arr[5]= {1,3,5,7,8} ; 
int *p = &arr[0] ;
int *q = &arr[1] ; 
cout<<"use of value at operator using p ptr : "<<*p<<endl ; 
cout<<"use of value at operator using q ptr : "<<*q<<endl ; 
cout<<"value stored at p "<<p<<endl; 
cout<<"address of zero index "<<arr<<endl;
cout<<"address of zero index "<<&arr[0]<<endl;
cout<<"value stored at q "<<q<<endl;
cout<<"address of first index "<<&arr[0]+1<<endl;
cout<<"address of first index "<<&arr[1]<<endl;
cout<<*(p+1)<<endl ;
cout<<*(q+2)<<endl;






}