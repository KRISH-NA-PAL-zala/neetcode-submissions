class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size()-1;
        if(s.size() == 1) return true;
        for(int i = 0;i<= n/2;i++){
            while(!isalnum(s[i]) && i < n) i++;
            while(!isalnum(s[n]) && n > i) n--;
            if(tolower(s[i]) != tolower(s[n])) return false;
            n--;
        }
        return true;
    }
};
