#include<iostream>
using namespace std; 
int main(){
int count = 0 ; 
int n ; 
// cin>>n ;
// cout<<n;
char ch[20];
cout<<"enter your string :"<<endl;
cin>>ch;
cout<<ch;

for(int i = 0 ; i<20 ; i++){
   
    if(ch[i]=='\0'){
        count++;
    }
    
}
cout<<count ;


}