#include<iostream>
using namespace std;
int main(){
    int count = 0 ; 
    char ch[30]; 
    cout<<"enter your string : "<<endl ; 
    cin>>ch;
    for(int i = 0 ; ch[i]!=0 ; i++){
        count++;
    }
    cout<<"the length of the string is : "<<count;
}