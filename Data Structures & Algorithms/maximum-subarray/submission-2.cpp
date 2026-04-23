class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0], subsum = 0;
        for (int num : nums) {
            if (subsum < 0) subsum = 0;
            
            subsum += num;
            res = max(subsum, res);
        }
        return res;
    }
};