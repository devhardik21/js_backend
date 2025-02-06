#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
    while(i<=n){
       int start=i-1;
        int j=1;
        while(start){
            cout<<" ";
            start=start-1;
        }
        int star=(n-i+1);
        while(star){
            cout<<i;
            star=star-1;
        }
        cout<<endl;
        i=i+1;
        
    }
    }