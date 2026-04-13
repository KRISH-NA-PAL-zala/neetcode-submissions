class Solution {
    map<int, int> m;
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        if(m[n]) return m[n];
        m[n] = climbStairs(n-1) + climbStairs(n-2);
        return m[n];
    }
};
