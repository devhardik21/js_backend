#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int space= (n-i);
        //first triangle
        while(space){
            cout<<" ";
            space=space-1;
        }
        //second triangle
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        //third triangle
        int start=(i-1);
        while(start){
            cout<<start;
            start = start-1;
        }
        cout<<endl;
        i=i+1;
    }
}