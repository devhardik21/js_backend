#include<iostream>
using namespace std; 
int merge(int arr1[],int m, int arr2[], int n,int arr3[],int o){
    int i = 0 ;
    int j = 0 ; 
    int b = 0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[b]=arr1[i];
            b++;
            i++;
        }
        else{
            arr3[b]=arr2[j];
            b++;
            j++;
        }

    }
    while(i<m){
          arr3[b]=arr1[i];
            b++;
            i++;
    }
    while (j<n)
    {
         arr3[b]=arr2[j];
            b++;
            j++;
    }
    
    for(int a = 0 ; a<8;a++){
        cout<<arr3[a]<<" ";
    }

}
int main(){

    int arr1[6]={1,2,3,9,10};
    int arr2[5]={5,11,17};
    int arr3[8]={0};
    merge(arr1,6,arr2,5,arr3,11);
    
}