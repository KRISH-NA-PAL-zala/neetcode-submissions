class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        int res = j;
        while(i <= j){
            int pile = (j + i) / 2;
            long long hour = 0;
            for(int a = 0;a < piles.size();a++){
                hour += ceil(static_cast<double>(piles[a])/pile);
            }
            if(hour <= h){
                res = pile;
                j = pile - 1;
            }else{
                i = pile + 1;
            }
        }
        return res;
    }
};
