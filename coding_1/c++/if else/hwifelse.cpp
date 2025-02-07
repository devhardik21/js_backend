#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Our Character is :";
    cin>>ch;
    int p= ch;
    cout<<p <<endl;
    if(p>64 && p<=90){
         cout<<"number is capital letter";
    }
    if(p>96 && p<=121){
        cout << "our letter is an small letter";
    }
    if(p>47 && p<=58){
        cout << "our number is numeric";
    }
}