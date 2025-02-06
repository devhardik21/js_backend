#include<iostream>
#include<vector>
using namespace std ;
void allsubs(int arr[] , int ind , int n ,vector<int>sub ){
if(ind == n){
    for(auto it : sub){
        cout<<it ;
    }
    if(sub.size() == 0){
    cout<<"{}";
    } 
     cout<<endl ;
    return ;
}

sub.push_back(arr[ind]) ; 
allsubs(arr, ind+1 ,3 , sub ) ;
sub.pop_back() ;
allsubs(arr, ind+1 ,3 , sub ) ;

}
int main(){
int arr[] = {3,1,2} ; 
vector<int>sub;
allsubs(arr, 0 ,3 , sub ) ;


}