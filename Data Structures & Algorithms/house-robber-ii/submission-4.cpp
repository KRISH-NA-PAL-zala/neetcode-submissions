class Solution {
    int dfs(vector<int>& nums,int i, vector<int>& dp, bool flag){
        if(i >= nums.size() || (flag && i == nums.size() - 1)) return 0;

        if(dp[i] != -1) return dp[i];

        dp[i] = max(dfs(nums, i + 1, dp, flag), nums[i] + dfs(nums, i + 2, dp, flag));
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size(), -1);
        int first = dfs(nums, 0, dp, true);
        vector<int> dp2(nums.size(), -1);
        int second = dfs(nums, 1, dp2, false);
        return max(first, second);
    }
};
