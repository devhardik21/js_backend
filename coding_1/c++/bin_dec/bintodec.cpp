#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
int i=0;
int ans =0;
int digit;
cout<<"enter your number :";
cin>>n;
while(n!=0){
    int digit = n%10;
    if(digit==1){
        ans = digit*(pow(2,i))+ ans;
    }
    n=n/10;
    i++;
}
cout <<ans;
}