class Solution {
public:
    int numDecodings(string s) {
        int dp1 = 0, dp2 = 0, res = 1;
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] == '0'){
                dp1 = 0;
            }else{
                dp1 = res;
                if(i < s.size() - 1 && stoi(s.substr(i, 2)) >= 10 && stoi(s.substr(i, 2)) <= 26){
                    dp1 += dp2;
                }
            }
            dp2 = res;
            res = dp1;
            dp1 = 0;
        }
        return res;
    }
};
