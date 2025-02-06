#include<iostream>
using namespace std; 
int sumarr(int *p , int n){
    int ans = 0 ; 
    for(int i = 0 ;i< n ; i++){
        ans=ans+p[i] ; 
    }
    return ans ; 

}
int main(){
    int *arr = new int[5] ; 
    //getting array as input
    for(int i = 0 ; i<5 ; i++){
        cin>>arr[i];//also equivalent to *(arr + i )
    }
    int ans = sumarr(arr,5);
    cout<<"the answer is :"<<ans<<endl;
    return 0 ;

}