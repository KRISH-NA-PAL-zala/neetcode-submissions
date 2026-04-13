class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast) break;
        }
        int slow_s = 0;
        while(true){
            slow = nums[slow];
            slow_s = nums[slow_s];
            if(slow == slow_s) return slow;
        }
        return -1;
    }
};
