class Solution {
    int robber(vector<int>& nums, int l, int r){
        int rob1 = 0, rob2 = 0;

        for(int i = l;i <= r;i++){
            int temp = max(nums[i] + rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        int rob1 = robber(nums, 0, nums.size() - 2);
        int rob2 = robber(nums, 1, nums.size() - 1);

        return max(rob1, rob2);
    }
};
