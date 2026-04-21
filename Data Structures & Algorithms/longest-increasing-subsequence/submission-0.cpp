class Solution {
    int dfs(vector<int>& nums, int i, int j, vector<vector<int>>& dp){
        if(i == nums.size()) return 0;
        if(dp[i][j + 1] != -1) return dp[i][j + 1];

        dp[i][j + 1] =  dfs(nums, i + 1, j, dp);
        if(j == -1 || nums[i] > nums[j]){
            dp[i][j + 1] = max(1 + dfs(nums, i + 1, i, dp), dp[i][j + 1]);
        }
        
        return dp[i][j + 1];
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return dfs(nums, 0, -1, dp);
    }
};
