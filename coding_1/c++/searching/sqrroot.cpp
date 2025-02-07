#include<iostream>
using namespace std;
double mainnum(int x){
 long long int ans= -1 ;
 long long int  s = 0 ;
long long int  e = x;
long long int mid  = s + (e - s)/2;
  while(s<=e){
      long long int sqr = mid*mid;
      if(sqr==x){
          ans = mid ;
          return mid;

      }
       if(sqr>x){
          e = mid-1;
      }
      else{
          s= mid + 1;
        ans = mid;
        
      }
      mid = s + (e-s)/2;

  } 
  return ans;
}
double precise(int precision , int x , int b){
double factor = 1 ; 
double ans = b ; 
for(double i= 1; i<=precision; i++){
factor = factor/10;
for(double j = b; j*j<=x ; j=j+factor){
    ans = j ;
}
}
return ans; 
}
int main(){
    int n ;
    int precision;
cout<<"enter your number : "<<endl;
cin>>n;
 cout<<"enter your precision"<<endl;
 cin>>precision;
 int b= mainnum(n);
cout<<" the main number without precision is :  "<<mainnum(n)<<endl;
cout<< " the square root with precision is : "<<precise(precision , n , b);

}