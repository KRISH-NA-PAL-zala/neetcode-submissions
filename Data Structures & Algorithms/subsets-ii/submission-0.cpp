class Solution {
    set<vector<int>> res;
    vector<vector<int>> ans;
    vector<int> subset;

    void dfs(vector<int> &nums, int i){
        if(i >= nums.size()){
            res.insert(subset);
            return;
        }

        subset.push_back(nums[i]);
        dfs(nums, i + 1);
        subset.pop_back();
        dfs(nums, i + 1);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        dfs(nums, 0);
        for(auto x: res){
            ans.push_back(x);
        }
        return ans;
    }
};
