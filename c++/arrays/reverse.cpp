#include<iostream>
using namespace std;
int revarray(int n[],int size){
int start =0;
int end = size-1;
while(end>start){
int store = n[start];
 n[start]= n[end];
 n[end]= store ;
start++;
end--;
}
for(int i =0;i<size;i++){
    cout<< n[i]<<" ";
}

}

int main(){
int arr[6]={1,2,3,4,5,6};
revarray(arr,6);
int array[8];
cout<<"enter your array"<<endl;
for(int i=0;i<8;i++){
    cin>>array[i];
}
revarray(array,8);

}