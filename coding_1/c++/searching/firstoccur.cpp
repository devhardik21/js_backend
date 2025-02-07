#include<iostream>
using namespace std;
int firstocc(int arr[], int size, int key){
    int s = 0 ; 
    int store = 0;
    int e = size-1;
    int mid = s + (e-s)/2 ;
    while(s<=e){
        if(arr[mid] ==key){
            store = mid;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        mid = s + (e-s)/2 ; 

    }
    return store;
}
int main(){
    int n ; 
    cout<<"enter your number : "<<endl;
    cin>>n;
    int arr[7]={1,2,3,4,4,4,7};
   int search=firstocc(arr,7,n);
   cout<< "the index of the first occurence is"<<search;
}