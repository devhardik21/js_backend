#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int value =i;
        int j=1;
        while(j<=i){
            cout<<char(64+value);
            value=value +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}