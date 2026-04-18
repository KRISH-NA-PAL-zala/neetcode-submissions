class Solution {
    void palindromicCenter(string& s, int l, int r, int& count){
        while(l >= 0 && r <= s.size() - 1 && s[l] == s[r]){
            l--; r++; count++;
        }
    }
public:
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0;i < s.size();i++){
            // For Odd length
            palindromicCenter(s, i, i, count);

            // For Even length
            palindromicCenter(s, i, i + 1, count);
        }
        return count;
    }
};
