class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(), nums.end());
        int res = 0;
        int t_res = 1;
        for(int i = 1;i < nums.size();i++){
            if(nums[i - 1] == nums[i]) continue;
            if(nums[i - 1] + 1 == nums[i]){
                t_res++;
            }else{
                t_res = 1;
            }
            res = max(res, t_res);
        }
        return max(res, t_res);
    }
};
