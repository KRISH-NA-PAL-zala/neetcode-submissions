class Solution {
    vector<vector<int>> res;
    void permutation(vector<int>& nums, int s){
        if(s == nums.size()){
            res.push_back(nums);
            return;
        }

        for(int i = s;i < nums.size();i++){
            swap(nums[i], nums[s]);
            permutation(nums, s + 1);
            swap(nums[i], nums[s]);
        }
        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0);
        return res;
    }
};
