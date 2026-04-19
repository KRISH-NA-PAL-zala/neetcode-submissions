class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size() + 1);
        dp[s.size()] = 1;
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] == '0'){
                dp[i] = 0;
            }else{
                dp[i] = dp[i + 1];
                if(i < s.size() - 1 && stoi(s.substr(i, 2)) >= 10 && stoi(s.substr(i, 2)) <= 26){
                    dp[i] += dp[i + 2];
                }
            }
        }
        return dp[0];
    }
};
