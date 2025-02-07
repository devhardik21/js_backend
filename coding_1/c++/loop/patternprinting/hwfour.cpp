#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
   int value=1;
    while(i<=n){
        int j=1;
        int start = (n-i);
        while(start){
            cout<<" ";
            start--;
        }
        while(j<=i){
            cout<<value;
            value++;
            j++;
         }
         cout<<endl;
         i++;
    }
}
