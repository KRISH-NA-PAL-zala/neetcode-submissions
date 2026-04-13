class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int n = digits.size() - 1;
        if(n<0)return {1};
        while(n >= 0 && carry){
            if(digits[n] == 9){
                digits[n] = 0;
                n--;
                continue;
            }
            digits[n] += 1;
            carry = 0;
            n--;
        }
        if(carry){
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
