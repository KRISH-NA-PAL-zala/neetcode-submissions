class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j;
        int n = nums.size();
        while(i < n){
            j = (n + i)/2;
            if(nums[i] == target) return i;
            if(nums[j] == target) return j;
            if(nums[n - 1] == target) return n-1;
            if(nums[j] < target) {
                i = j + 1;
            } else {
                n = j;
            }
        }
        return -1;
    }
};
