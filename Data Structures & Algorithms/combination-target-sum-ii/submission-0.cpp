class Solution {
    set<vector<int>> res;
    vector<int> subset;
    void dfs(vector<int> &candidates, int target, int i, int subsum){
        if(i >=  candidates.size() || subsum >= target){
            if(subsum == target){
                res.insert(subset);
            }
            return;
        }

        subset.push_back(candidates[i]);
        subsum += candidates[i];
        dfs(candidates, target, i + 1, subsum);
        
        subset.pop_back();
        subsum -= candidates[i];
        dfs(candidates, target, i + 1, subsum);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, 0);
        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
};