#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=(64+i);
            cout<<ch;
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
}