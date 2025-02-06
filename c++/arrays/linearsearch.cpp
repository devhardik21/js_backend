#include<iostream>
using namespace std;
int search(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int key;
int arr[8]={2,4,6,9,45,56,44,5};
cout<<"enter the number you wanna find out : ";
cin>>key;
int found = search(arr,8,key);
if(found){
    cout<<"the key is present";
}
else{
    cout<<"the key is not found";
}



}