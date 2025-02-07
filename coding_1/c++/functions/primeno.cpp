#include<iostream>
using namespace std;
int primeno(int a){
    int i=2;
    while(i<=(a-1)){
        if(a%i==0){
            return 0;
        }
             i++;
        }
        return 1;
    }
int main(){
int n;
cout<< "enter your number :";
cin>>n;
if(primeno(n)){
    cout<<"prime number";
}
else{
    cout<<"not a prime number";
}
}