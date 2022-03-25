class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxProfit = 0;
        int profit;
        for(int i: prices){
            int profit = i - min;
            min = min<i?min:i;
            maxProfit = profit>maxProfit?profit:maxProfit;
        }
        return maxProfit;
    }
};