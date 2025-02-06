#include<iostream>
using namespace std;
void arrsort( int arr[] , int n ){
int i = 0;
int j = n - 1;
while(i<j){
while (arr[i] == 0 && i<j){
    i++;
}
while ( arr[j] == 1 && i<j){
    j--;
}
if(arr[i] == 1 && arr[j] == 0 && i<j){
    swap(arr[i], arr[j]);
    i++;
    j--;
}
}
 for(int p = 0;p<n; p++){
        cout << arr[p]<<" ";
    }

}

int main (){
int arr[8] = { 1,0,0,1,0,0,1,0};
arrsort(arr, 8);

}