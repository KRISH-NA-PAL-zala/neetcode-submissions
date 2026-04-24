class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int steps = nums[0], i = 1;

        while(i <= steps){
            if(i == nums.size() - 1) return true;

            steps = max(i + nums[i], steps);
            i++;
        }
        
        return false;
    }
};
