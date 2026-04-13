class Solution {
public:
    int digit_square(int n){
        int x = 0;
        while(n != 0){
            int i = n%10;
            x += i*i;
            n /= 10;
        }
        return x;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n != 1 && !s.count(n)){
            s.insert(n);
            n = digit_square(n);
        }
        return n == 1;
    }
};
