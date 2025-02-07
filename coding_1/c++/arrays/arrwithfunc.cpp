#include<iostream>
using namespace std;
void yeah(int p[]){
      for(int i=0;i<15;i++){
        cout<< p[i]<<" ";
    }
    cout<<endl;

}
void printarray(int n[], int size){
    for(int i=0;i<size;i++){
        cout<< n[i];
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,2,3};
    printarray(arr,6);
    // int a[17]={1,6,7,8,};
    // int b[5]={1,7,8,9};
    // yeah(a);
    // yeah(b);

}