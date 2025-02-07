#include<iostream>
using namespace std ; 
int sumofarr(int arr[] ,int size){
    int sum = 0 ;
    if(size == 0){
        return 0 ; 
    }
    else{
    sum = arr[0] +sumofarr(arr+1 , size-1)  ; 
    return sum ;
    }
}
int main(){
int arr[5] = {1 ,4 ,6, 8 ,9} ; 
int sum = sumofarr(arr,5)  ;
cout<<"the sum of the array is : "<<endl ;
cout<<sum; 
}