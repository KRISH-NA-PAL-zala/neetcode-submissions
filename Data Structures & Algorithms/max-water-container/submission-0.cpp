class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int res = 0;
        while(i < j){
            int area;
            if(heights[i] <= heights[j]){
                area = heights[i] * (j - i);
                i++;
            }else{
                area = heights[j] * (j - i);
                j--;
            }
            res = max(res, area);
        }
        return res;
    }
};
