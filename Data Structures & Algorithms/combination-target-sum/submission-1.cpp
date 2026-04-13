class Solution {
    vector<vector<int>> res;
    vector<int> subset;
    void dfs(vector<int> &nums, int target, int i, int subsum){
        if(i >= nums.size()){
            if(subsum == target){
                res.push_back(subset);
            }
            return;
        }
        if(subsum > target) return;

        subset.push_back(nums[i]);
        subsum += nums[i];
        dfs(nums, target, i, subsum);

        subset.pop_back();
        subsum -= nums[i];
        dfs(nums, target, i + 1, subsum);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        dfs(nums, target, 0, 0);

        return res;
    }
};
