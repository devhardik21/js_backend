#include<iostream>
using namespace std;
int main(){
int a,b;
char ch;
cout<<"enter your first number a :";
cin>>a;
cout<<endl<<"enter your second number b :";
cin>>b;
cout<<endl<<"enter the operation your wanna perform :";
cin>>ch;
switch(ch){
 case '+' : cout<<(a+b)<<endl;
 break;
 case '-' : cout<<(a-b)<<endl;
 break;
 case '*' : cout<<(a*b)<<endl;
 break;
 case '/' : cout<<(a/b)<<endl;
 break;
}

}