#include<iostream>
using namespace std;
int main(){
//declaration of an array
 int number[10];
 //initialising an array
 int arr[6]={1,2,3,4,5,6};
 //accesing an term of the arrays
 int a = arr[3];
 cout<<a;
cout<<"printing an whole array :"<<endl;
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
//printing an garbage value 
int numb[7];
cout<<endl<< numb[3]<<endl;
int dost[8]={1,2,3,4};
for(int i=0;i<8;i++){
    cout<<dost[i]<<" ";
}
}


