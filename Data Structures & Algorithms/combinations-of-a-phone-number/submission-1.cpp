class Solution {
    void dfs(string& digits, int start, unordered_map<char, string>& m, string& subset, vector<string>& res){
        if(start == digits.size()){
            res.push_back(subset);
            return;
        }

        for(auto c : m[digits[start]]){
            subset.push_back(c);
            dfs(digits, start + 1, m, subset, res);
            subset.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(!digits.size()) return {};
        vector<string> res;
        string subset;
        unordered_map<char, string> m = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        dfs(digits, 0, m, subset, res);
        return res;
    }
};
