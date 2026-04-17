class Solution {
    bool isPalindrome(string s, int l, int r){
        while(l < r){
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }

    void dfs(string s,int start, vector<string>& subset, vector<vector<string>>& res){
        if(start == s.size()){
            res.push_back(subset);
            return;
        }

        for(int i = start;i < s.size();i++){
            if(isPalindrome(s, start, i)){
                subset.push_back(s.substr(start, i - start + 1));
                dfs(s, i + 1, subset, res);
                subset.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> subset;
        dfs(s, 0, subset, res);
        return res;
    }
};
