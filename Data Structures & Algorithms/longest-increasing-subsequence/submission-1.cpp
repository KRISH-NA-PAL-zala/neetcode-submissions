class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        dp.push_back(nums[0]);
        for(int i = 1;i < nums.size();i++){
            if(dp.back() < nums[i]){
                dp.push_back(nums[i]);
                continue;
            }

            for(int j = 0;j < dp.size();j++){
                if((j - 1 < 0 || dp[j - 1] < nums[i]) && dp[j] >= nums[i]){
                    dp[j] = nums[i];
                    break;
                }
            }
        }
        return dp.size();
    }
};
