#include<iostream>
using namespace std;
int min(int arr[],int s){
    int min= INT32_MAX;
    for(int i=0;i<s;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        return min;
    }
}
int main(){
int size;
cout<<"enter the size of the array";
cin>>size;
int numb[100];
for(int i=0;i<size;i++){
    cin>>numb[i];
}
cout<<"the minimum value of this array is :"<< min(numb,size);
}