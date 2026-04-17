class Solution {
    vector<vector<string>> res;
    vector<string> subset;
    bool isPalindrome(string s){
        int n = s.size();
        if(n == 1) return true;
        int i = 0, j = n - 1;
        while(i < j){
            if(s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }

    void dfs(string s,int start){
        if(start == s.size()){
            res.push_back(subset);
            return;
        }

        for(int i = start;i < s.size();i++){
            string subString = s.substr(start, i - start + 1);
            if(isPalindrome(subString)){
                subset.push_back(subString);
                dfs(s, i + 1);
                subset.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        dfs(s, 0);
        return res;
    }
};
