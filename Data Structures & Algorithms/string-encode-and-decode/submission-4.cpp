class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto str: strs){
            s += to_string(str.size()) + "#" + str;
        }
        return s;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> res;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int l = stoi(s.substr(i, j-i));
            res.push_back(s.substr(j+1, l));
            i = j + l + 1;
        }
        return res;
    }
};
