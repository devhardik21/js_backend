#include<iostream>
using namespace std ; 
int main(){
int num = 6 ; 
int *ptr = &num ; 
cout<<"printing the address will give :"<<&num<<endl ; 
cout<<"printing the variable pointer will give :"<<ptr<<endl ; 
cout<<"printing *ptr will give :"<<*ptr<<endl; 
//copying an pointer 
int *q = ptr ;
cout<<"q is :"<<q<< " whereas ptr is :"<<ptr<<endl; 
cout<<*q<<"---"<<*ptr; 

}