class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        if(s.size() != t.size()) return false;
        for(auto c: s){
                m[c]++;
        }
        for(auto c: t){
                if(!m[c]) return false;
                m[c]--;
        }
        return true;
    }
};
