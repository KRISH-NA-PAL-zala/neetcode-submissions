class Solution {
    int dfs(vector<int>& coins, int amount, unordered_map<int, int>& dp){
        if(amount == 0) return 0;
        if(dp.contains(amount)) return dp[amount];

        int res = INT_MAX;
        for(auto coin: coins){
            if(amount - coin >= 0){
                int result = dfs(coins, amount - coin, dp);
                if(result != INT_MAX){
                    res = min(res, 1 + result);
                }
            }
        }

        dp[amount] = res;
        return dp[amount];        
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        unordered_map<int, int> dp;
        int minCoins = dfs(coins, amount, dp);
        return minCoins == INT_MAX ? -1 : minCoins;
    }
};