class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i = 1;i < nums.size();i++){
            nums[i] = max(i + nums[i], nums[i - 1]);
        }

        int jump = 0, res = 0;

        while(jump < nums.size() - 1){
            jump = nums[jump];
            res++;
        }

        return res;
    }
};
