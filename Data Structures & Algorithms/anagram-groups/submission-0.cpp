class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(!strs.size()) return {{}};
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        for(auto str: strs){
            string s = str;
            sort(s.begin(), s.end());
            m[s].push_back(str);
        }
        for(auto ele: m){
            res.push_back(ele.second);
        }
        return res;
    }
};
