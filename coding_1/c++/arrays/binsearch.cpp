#include<iostream>
using namespace std;
int binarysearch(int array[],int size, int key){
int s = 0 ;
int e = size-1;
int mid = (s + e)/2; 
while (s<=e){
 
  if (array[mid] == key){
    return mid ; 
  }
  if(array[mid] > key ){
    e = mid - 1;
  }
  else{
    s = mid +1 ;
  }
  mid = ( s + e)/2 ;

}
return -1 ;

}
int main (){
int arr[6] = {1,2,3,4,5,6};
int p[5] = {1,2,3,4,5}; 
int res = binarysearch(arr,6,4);
cout << res << endl;
}