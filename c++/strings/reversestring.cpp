#include<iostream>
using namespace std;
void reverse(char ch[],int m){
    int s = 0;
    int e = m-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<"the reverse of the string is :";
    for(int i=0;i<m;i++){
        cout<<ch[i];
    }

} 
int main(){
char ch[20]; 
int count = 0 ;
cout<< "enter your string : "<<endl;
cin>>ch;
for(int i = 0;ch[i]!='\0'; i++ ){
    count++; 
}

reverse(ch,count);




}