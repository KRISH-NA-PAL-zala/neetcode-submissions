class Solution {
    bool dfs(string& s, vector<string>& wordDict, int i, vector<int>& dp){
        if(dp[i] != -1) return dp[i];

        for(auto word: wordDict){
            if(s.size() - i >= word.size() && s.substr(i, word.size()) == word){
                dp[i] = dfs(s, wordDict, word.size() + i, dp);
                if(dp[i]) return dp[i];
            }
        }
        return dp[i] = 0;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size() + 1, -1);
        dp[s.size()] = 1;
        return dfs(s, wordDict, 0, dp);
    }
};
