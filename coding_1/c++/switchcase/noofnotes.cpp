#include<iostream>
using namespace std;
int main(){
int n,h,f,t,o;
//100 rs = h
//50rs = f
// 20rs = t
//1rs = o
int num =1;
cout << "enter your amount :";
cin>> n;
switch(num){

case 1 : {
    h = n/100;
         n= n - (100*h);
         cout << "number of 100rs notes reqd are :"<<h<<endl;
}
case 2 :{
        f=n/50;
        n=n-(f*50);
        cout<<"number of 50rs notes required are :"<<f<<endl;
}
case 3 : {
    t = n/20;
    n= n-(t*20);
    cout<<"number of 20rs notes required are :"<<t<<endl;
case 4 : {
    o = n/1;
    cout<<"number of 1rs notes required are :"<<o<<endl;}
}
}

    


}