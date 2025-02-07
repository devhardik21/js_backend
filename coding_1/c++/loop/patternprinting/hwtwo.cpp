#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int start = (n-i);
        while(start){
            cout <<" ";
            start--;
        }
        while (j<=i){
         cout<<i;
         j=j+1;
        }
        cout<<endl;
        i=i+1;
            }
}