class Solution {
    vector<vector<int>> res;
    void dfs(vector<int> &nums, int s){
        if(s >= nums.size()){
            res.push_back(nums);
            return;
        }

        for(int i = s;i < nums.size();i++){

            swap(nums[i], nums[s]);
            dfs(nums, s + 1);
            swap(nums[i], nums[s]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0);
        return res;
    }
};
