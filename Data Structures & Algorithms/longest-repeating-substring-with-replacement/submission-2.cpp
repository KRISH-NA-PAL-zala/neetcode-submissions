class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26);
        int maxfreq = 0;
        int i = 0;
        int j = 0;
        int res = 0;
        while(j < s.size()){
            freq[s[j] - 'A']++;
            maxfreq = max(maxfreq, freq[s[j] - 'A']);
            if(j + 1 - i - maxfreq > k){
                freq[s[i] - 'A']--;
                i++;
            }
            res = max(j + 1 - i, res);
            j++;
        }
        return res;
    }
};
