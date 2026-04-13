class Solution {
    vector<vector<int>> res;
    vector<int> subset;
    void dfs(vector<int> &candidates, int target, int start, int subsum){
        if(subsum >= target){
            if(subsum == target)
                res.push_back(subset);
            return;
        }

        for(int i = start;i < candidates.size();i++){
            if(i > start && candidates[i] == candidates[i - 1]) continue;

            subset.push_back(candidates[i]);
            dfs(candidates, target, i + 1, subsum + candidates[i]);
            subset.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, 0);
        return res;
    }
};
