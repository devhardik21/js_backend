#include<iostream>
using namespace std ;
int main(){
int arr[6] = {1,2,3,4,5,6} ; 
cout<<"address of arr :"<<arr<<endl ;  
cout<<"address of arr[0]"<<&arr[0]<<endl ; 
cout<<"address using &arr "<<&arr<<endl; 
cout<<" 4 :"<<&arr[1]<<endl;
cout<<" 5:"<<&arr[2]<<endl;
cout<<"6 :"<<*(arr+3)<<endl;
cout<<"7:"<<*arr +100<<endl;

}