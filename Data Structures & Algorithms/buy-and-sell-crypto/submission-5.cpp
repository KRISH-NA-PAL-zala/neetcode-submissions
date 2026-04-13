class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];
        for(auto price: prices){
            maxP = max(maxP, price-minBuy);
            minBuy = min(minBuy, price);
        }
        return maxP;
    }
};
