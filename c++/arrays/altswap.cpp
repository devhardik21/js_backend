#include<iostream>
using namespace std;
//swap function 
void altswap(int n[],int size){
int start = 0;
int end = start+1;
while(end<=size){
swap(n[start],n[end]);
start = start + 2;
end = end+2;
}
for(int i =0;i<size;i++){
        cout<<n[i];
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    altswap(arr,6);
    cout<<endl<<"enter your aray";
    int array[5];
    //for(int i =0;i<5;i++){
        
   // }

}