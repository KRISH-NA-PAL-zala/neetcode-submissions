class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b){ return a[0] < b[0];});

        result.push_back(intervals[0]);

        for(int i = 1;i < intervals.size();i++){
            if(intervals[i - 1][1] < intervals[i][0]){
                result.push_back(intervals[i]);
            }else if(intervals[i - 1][0] <= intervals[i][1]){
                intervals[i] = {min(intervals[i - 1][0], intervals[i][0]), max(intervals[i - 1][1], intervals[i][1])};
                result[result.size() - 1] = intervals[i];
            }
        }

        return result;
    }
};
