#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"enter your number :";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
    cout<<endl;
    i=i+1;
    }
}