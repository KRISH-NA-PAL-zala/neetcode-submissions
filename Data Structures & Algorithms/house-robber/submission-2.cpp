class Solution {
    int dfs(vector<int>& nums, int i, unordered_map<int, int>& dp){
        if(i >= nums.size()) return 0;
        if(dp.contains(i)){
            return dp[i];
        }
        dp[i] = nums[i] + max(dfs(nums, i + 2, dp), dfs(nums, i + 3, dp));
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        unordered_map<int, int> dp;
        if(nums.size() == 1) return nums[0];
        return max(dfs(nums, 0, dp), dfs(nums, 1, dp));
    }
};
