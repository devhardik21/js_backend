#include<iostream>
using namespace std ;
bool issorted(int arr[] , int size){

if(size==0 || size == 1){
    return true ; 
}
if(arr[0]>arr[1]){
    return false ; 
}
else{
bool remarr = issorted(arr+1 , size-1) ;
return remarr ; 
}
}
int main(){
int arr[6]={1,3,5,45,9,12} ; 

 int ans = issorted(arr, 6);
 if(ans){
    cout<<"array is sorted"<<endl ;  
 }
 else{
    cout<<"array is not sorted"<<endl ;
 }



}