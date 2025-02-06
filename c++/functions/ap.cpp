#include<iostream>
using namespace std;
int ap(int a){
    int term= (3*a) + 7;
    return term;
}
int main(){
int n;
cin>>n;
int ans =ap(n);
cout<<"the"<<n<<"th term of the ap is :"<<ans;
}