class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;
        for(auto num: s){
            if(!s.contains(num - 1)){
                int t_res = 1;
                while(s.contains(num + t_res)){
                    t_res++;
                }
                res = max(res, t_res);
            }
        }
        return res;
    }
};
