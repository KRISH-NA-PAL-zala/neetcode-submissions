class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int res = 0;
        int t_res = 0;
        for(auto num: s){
            if(s.contains(num - 1)){
                t_res++;
            }else{
                t_res=1;
            }
            res = max(res, t_res);
        }
        return res;
    }
};
