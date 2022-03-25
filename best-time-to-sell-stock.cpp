class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        if(prices.size()==1)
            return 0;
        int buy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > buy){
                maxProfit += prices[i] - buy;
                buy = prices[i];
            }else{
                buy = prices[i];
            }
        }
        return maxProfit;
    }
};