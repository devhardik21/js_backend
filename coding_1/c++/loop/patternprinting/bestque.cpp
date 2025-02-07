#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
       int value=1;
        int start=(n-i+1);
        while(start){
            cout<<value;
            value++;
            start--;
        }
        //second
        int strtwo=(i-1);
        while(j<=strtwo){
            cout<<"*";
            j++;
        }
        //third
        int strthree=(i-1);
        while(j<=strthree){
            cout<<"*";
            j++;
        }
        //fourth
        int val=n;
        while(start){
            cout<<val;
            val--;
            start--;
        }
        cout<<endl;
        i++;
    }
    
    }