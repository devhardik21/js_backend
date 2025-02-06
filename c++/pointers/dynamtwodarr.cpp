#include<iostream>
using namespace std; 
int main(){
int row ; 
int col ;

cout<<"enter number of rows :" ; 
cin>>row ;  
cout<<endl<<"enter number of col :" ; 
cin>>col;
int **arr = new int*[row] ;
for(int i = 0 ; i<row ; i++){
        arr[i] = new int[col] ; 
}
//taking input from the user 
for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j<col ; j++){
        cin>>arr[i][j] ;
    }
}
//taking output from the user 
for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j<col ; j++){
        cout<<arr[i][j] <<"  ";
    }
    cout<<endl ; 
}
//memory deletation 
for(int i = 0 ; i<row; i++){
    delete arr[i] ;
}
delete []arr ;

}