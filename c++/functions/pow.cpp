#include<iostream>
using namespace std;
int power(int a, int b){
int ans = 1;
for(int i=1;i<=b;i++){
    ans = a*ans;
}
 return ans;    
}
int main (){
int c,d,ans;
cin>>c>>d;
cout<<endl;
ans= power(c,d);
cout<< ans; 
}