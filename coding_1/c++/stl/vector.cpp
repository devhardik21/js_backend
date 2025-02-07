#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>v;
v.push_back(6);
v.push_back(2);
v.push_back(9);
for(int i:v){
    cout<<i;
}
cout<<endl; vector<int>a(4,2);
for(int i:a){
 cout<<i; }
 cout<<endl; cout<<v.at(0); cout<<"size of array"<<v.size();
cout<<endl;
cout<<"capacity of array"<<v.capacity()<<endl;
cout<<v.front()<<endl; cout<<v.back()<<endl;
}
