class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        int res = nums[0], sum = 0;
        int i = 0,j = 0;

        while(i <= j && j < nums.size()){
            if(sum < 0){
                i = j;
                sum = 0;
            }
            sum += nums[j]; j++;
            res = max(res, sum);
        }
        return res;
    }
};