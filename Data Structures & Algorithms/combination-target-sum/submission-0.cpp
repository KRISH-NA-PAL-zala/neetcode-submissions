class Solution {
    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> subset, int target, int i, int subsum){
        if(i >= nums.size()){
            if(subsum == target){
                res.push_back(subset);
            }
            return;
        }
        if(subsum > target) return;

        subset.push_back(nums[i]);
        subsum += nums[i];
        dfs(nums, res, subset, target, i, subsum);

        subset.pop_back();
        subsum -= nums[i];
        dfs(nums, res, subset, target, i + 1, subsum);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        int subsum = 0;

        dfs(nums, res, subset, target, 0, subsum);

        return res;
    }
};
