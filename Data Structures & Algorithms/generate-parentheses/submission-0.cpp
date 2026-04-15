class Solution {
    vector<string> res;
    void dfs(int o, int c, string s, int n){
        if(s.size() == 2*n){
            res.push_back(s);
            return;
        }

        if(o < n){
            dfs(o + 1, c, s + '(', n);
        }
        if(c < o){
            dfs(o, c + 1, s + ')', n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        dfs(0, 0, "", n);
        return res;
    }
};
