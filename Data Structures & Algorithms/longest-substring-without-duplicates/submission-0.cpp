class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1) return 1;
        int i = 0;
        int j = i + 1;
        int res = 0;
        while(j < s.size()){
            int idx = -1;
            for(int a = i;a < j;a++){
                if(s[a] == s[j]){
                    idx = a;
                    break;
                }
            }
            if(idx != -1){
                i = idx + 1;
            }else{
                j++;
            }
            res = max(res, j - i);
        }
        return res;
    }
};
