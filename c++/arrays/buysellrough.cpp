class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int index;
        int ans = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
        }
        // here i got the min element of the array

        // finding the index of the minimum element
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] == min) {
                index = i;
                break;
            }
        }
        // now we have the element also
        int profit = -1;
        for (int i = 0; i < prices.size(); i++) {
            ans = ans - min;
            if (ans > profit) {
                profit = ans;
            }
        }
        if (profit > 0) {
            return profit;
        } else {
            return 0;
        }
    }
};