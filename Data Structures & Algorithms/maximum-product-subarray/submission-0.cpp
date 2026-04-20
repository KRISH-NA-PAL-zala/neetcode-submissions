class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int curr_max = 1, curr_min = 1;

        for(auto num: nums){
            int tmp = curr_max * num;
            curr_max = max(max(tmp, num * curr_min), num);
            curr_min = min(min(tmp, num * curr_min), num);
            res =  max(curr_max, res);
        }
        return res;
    }
};
