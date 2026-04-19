class Solution {
    int dfs(string& s, int i, vector<int>& dp){
        if(dp[i] != -1) return dp[i];

        if(s[i] == '0') return 0;
        int res, digit;

        res = dfs(s, i + 1, dp);
        digit = stoi(s.substr(i, 2));
        
        if(i < s.size() - 1 && digit >= 10 && digit <= 26) {
            res += dfs(s, i + 2, dp);
        }
        dp[i] = res;

        return dp[i];
    }
public:
    int numDecodings(string s) {
        vector<int> dp(s.size() + 1, -1);
        dp[s.size()] = 1;
        return dfs(s, 0, dp);
    }
};
