#include<iostream>
using namespace std;
int lastocc(int arr[], int size ,int key){
    int s= -1 ; 
    int e = size - 1;
    int store= 0;
    int mid = s + (e-s)/2;
    while(s<=e){
    if(arr[mid]==key){
        store = mid ;
        s = mid + 1;
    }
    else if(arr[mid]>key){
        e = mid - 1; 
    }
    else if(arr[mid]<key){
        s = mid +1;
    }
    mid = s + (e-s)/2;
    }
return store;
}
int main(){
int n;
cout<<"enter your number : ";
cin>> n ;
int arr[11]={1,2,3,4,5,6,6,6,6,6,11};
cout<<"the last occurence of the array is at index"<<lastocc(arr,11,6);
}