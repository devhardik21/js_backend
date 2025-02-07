#include<iostream>
using namespace std ;
void saydigit(int n){
if(n==0){
    return ; 
}
int d = n%10 ; 
 string arr[10] = {"zero", "one","two","three","four","five","six","seven","eight","nine"} ; 

 saydigit(n/10) ; 
 
 cout<<arr[d]<<" " ;
}



int main(){
    int n ; 
    cout<<"enter your number"<<endl ; 
    cin >> n ; 
   saydigit(n) ;

}