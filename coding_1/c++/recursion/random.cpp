#include<iostream>
using namespace std;
void rev_alt_arr(int arr[],int size){
    for(int i=0;i<size;i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);   
        }

    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int even[10]={1,4,7,10,13,16,19,22,25,28};
    int odd[9]={2,5,8,11,14,17,20,23,26};
    rev_alt_arr(even,10);
    rev_alt_arr(odd,9);
    
    printarray(even,10);
    printarray(odd,9);
    return 0;
    
}