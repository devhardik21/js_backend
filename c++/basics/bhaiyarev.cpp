class Solution {
public:
    int reverse(int x) {
        int ans =0;
        bool sign = false;
        if(x<0){
            sign = true;
            x = (-1)*x;
        }
        if(x>0){
         while(x>0){
             int digit = x%10;
             ans=ans*10 +digit;
           x=x/10;
        }
        }
        else{
            int digit = x%10;
            ans = ans*10 + digit ;
            x=x/10;
        }
         return sign?(-1)*ans :ans;
    }

};