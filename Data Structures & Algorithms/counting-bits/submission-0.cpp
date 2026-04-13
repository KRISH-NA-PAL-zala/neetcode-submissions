class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> resv;
        for(int i = 0;i <= n;i++){
            int res = 0;
            int x = i;
            while(x > 0){
                res += x%2;
                x >>= 1;
            }
            resv.push_back(res);
        }
        return resv;
    }
};
