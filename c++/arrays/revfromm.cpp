#include<iostream>
using namespace std ; 
int main(){
int m ;
cout<<"enter from where you want to reverse : "; 
cin>> m ;
int arr[7]={1,2,3,4,5,6,7};
  int n = 7;
   int s = m+1;
   int e = n-1;
   while(s<e){
       swap(arr[s] , arr[e]);
       s++;
       e-- ;
   }
   cout<<"the array after reversal is : ";
   for(int i = 0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
   }
}