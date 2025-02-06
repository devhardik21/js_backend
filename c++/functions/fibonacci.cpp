//0,1,1,2,3,5,8,13,21,34,55
#include<iostream>
using namespace std;
int fibbo(int p){
int sum = 0;    
int a=0;
int b=1;
for(int i=2;i<p;i++){
    sum = a+b;
    a=b;
    b=sum;
}
return b;

}
int main(){
    int n;
    cout<<"enter the term :";
    cin>>n;
    cout << "the"<<n<<"th term of the fibonacci series is :"<<fibbo(n);

}