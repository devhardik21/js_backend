#include<iostream>
using namespace std ; 
bool linearsearch(int arr[], int size , int target) {
if(size == 0){
    return false ; 
}
if(arr[0]==target){
    return true ; 
}
else{
    bool found = linearsearch(arr+1, size - 1 , target) ;
    return found ; 
}


}
int main(){

        int arr[10]={1,5,66,78,90,11,24,65,32,23}; 
      bool ans = linearsearch( arr, 10, 100) ; 
         if(ans){
            cout<<"the element is found"<<endl ;
         }
         else{
             cout<<"the element is not found"<<endl ;
         }

}