#include<iostream>
using namespace std ; 
bool ispresent(int arr[][4] , int target , int row , int col){
for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j<col ; j++){
        if(arr[i][j]==target){
            return 1;
        }
    }
}
return 0 ; 



}
int main(){
int arr[3][4] ;
//taking the input
for(int row = 0 ; row< 3 ; row++){
    for(int col = 0 ; col<4 ; col++){
        cin>>arr[row][col];
    }
}
//printing 
for(int row = 0 ; row< 3 ; row++){
    for(int col = 0 ; col<4 ; col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
int n ; 
cout<<"enter the number you want to search"<<endl;
cin>> n;
if(ispresent(arr,n,3,4)){
    cout<<"the element is there" ;
}
else{
    cout<<"not there" ;
}



}