class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res, subsum;
        int i = 0, j = 1;
        res = subsum = nums[i];
        while(i <= j && j < nums.size()){
            if(nums[i] > nums[i] + subsum){
                i = j;
                j++;
                subsum = nums[i];
                res = max(subsum, res);
                continue;
            }
            subsum += nums[j];
            j++;
            res = max(subsum, res);
        }
        return res;
    }
};
