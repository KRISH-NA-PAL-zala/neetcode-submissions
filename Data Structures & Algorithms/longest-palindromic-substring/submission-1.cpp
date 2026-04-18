class Solution {
    void palindromicCenter(string& s, int l, int r, int& maxStart, int& maxLen){
        while(l >= 0 && r <= s.size() - 1 && s[l] == s[r]){
            l--, r++;
        }

        if(r - l - 1 > maxLen){
            maxStart = l + 1;
            maxLen = r - l - 1;
        }
    }
public:
    string longestPalindrome(string s) {
        int maxStart = 0, maxLen = 0;

        for(int i = 0;i < s.size();i++){
            // For Odd Length of the substring
            palindromicCenter(s, i, i, maxStart, maxLen);

            // For Even Length of the substring
            palindromicCenter(s, i, i + 1, maxStart, maxLen);
        }
        return s.substr(maxStart, maxLen);
    }
};
