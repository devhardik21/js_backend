// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         //converting decimal into binary first
//         int bit;
//         float ans=0;
//         int i=0;
//         int comp=0;
//         int use;
//         int dev;
//         int p=0;
//         int pre;
//         int q=0;
//         float end;
//         while(n>0){
//             bit = n&1;
//             ans =bit* pow(10,i) + ans;
//             i++;
//             n>>1;
//         }
//         //ans is our binary number
//         while(ans>0){
//             use = n%10;
//             int dev = !use;
//             int comp = dev*pow(10,p) + comp;
//             p++;
//             ans=ans/10;
//         }
//         //complement is found as comp
//         while(comp>0){
//             pre = comp%10;
//             if(pre==1){
//                 end = pre*pow(2,q)+end;
//             }
//             q++;
//             pre = pre/10;

//         }
//         return end;

        
//     }
// };