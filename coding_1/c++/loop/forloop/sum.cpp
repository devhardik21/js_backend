#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;

}
