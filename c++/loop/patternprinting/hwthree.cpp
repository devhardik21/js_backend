#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int space=i-1;
        while(space){
            cout<<" ";
        space--;
        }
        int pattern=(n-i+1);
        int value =i;
        while(pattern){
            cout<<value;
            value++;
            pattern--;
        }
        cout<<endl;
        i=i+1;
    }
    }