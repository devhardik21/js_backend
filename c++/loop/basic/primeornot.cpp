#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    cout<<"enter your number : ";
    cin>>n;
    while(i<=(n-1)){
        if(n%i==0){
            cout<<"the number is not prime";
        }
        else{
            cout<<"the number is prime";
        }
        i=i+1;
    }
}