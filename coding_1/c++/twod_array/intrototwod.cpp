#include<iostream>
using namespace std; 
int main(){
    int arr[3][2] = {1 ,2 ,3 ,4 ,5,6};
    int arr1[3][4] = {{1,2,3,4} , {11,22,33,44} , {111,222,333,444}};
    //taking the input row wise
    // for(int row = 0 ; row<3 ; row++){
    //     for(int col = 0 ; col<2 ; col++ ){
    //         cin>>arr[row][col];
    //     }
    // }
    //taking input coloumn wise
    // for(int col = 0 ; col<2 ; col++){
    //     for(int row = 0 ; row<3 ; row++){
    //         cin>>arr[row][col];
    //     }
    // }
    //############## how it naturally happens ##############

    //printing the output
      for(int row = 0 ; row<3 ; row++){
        for(int col = 0 ; col<2 ; col++ ){
            cout<<arr[row][col]<<" " ;
        }
        cout<<endl ; 
    }
    cout<<endl ;
      for(int row = 0 ; row<3 ; row++){
        for(int col = 0 ; col<4 ; col++ ){
            cout<<arr1[row][col]<<" " ;
        }
        cout<<endl ; 
    }
}