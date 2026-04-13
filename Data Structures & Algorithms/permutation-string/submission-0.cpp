class Solution {
public:
    bool permutation(vector<int> freq){
        for(int i = 0;i < 26;i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) false;
        vector<int> freq(26);
        for(int i = 0;i < s1.size();i++){
            freq[s1[i] - 'a']++;
            freq[s2[i] - 'a']--;
        }
        if(permutation(freq)) return true;
        for(int i = s1.size();i < s2.size();i++){
            freq[s2[i - s1.size()] - 'a']++;
            freq[s2[i] - 'a']--;
            if(permutation(freq)) return true;
        }
        return false;
    }
};