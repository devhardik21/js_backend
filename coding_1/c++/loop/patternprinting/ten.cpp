#include<iostream>
using namespace std;
int main(){
    int n;
    int count =1 ;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=(64+count);
            cout<<ch;
            count = count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}