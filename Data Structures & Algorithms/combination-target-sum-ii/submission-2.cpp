class Solution {
    set<vector<int>> res;
    vector<int> subset;
    void dfs(vector<int>& cadidates, int target, int i, int subsum){
        if(i >= cadidates.size()){
            if(subsum == target){
                vector<int> dummy = subset;
                sort(dummy.begin(), dummy.end());
                res.insert(dummy);
            }
            return;
        }

        subset.push_back(cadidates[i]);
        subsum += cadidates[i];
        dfs(cadidates, target, i + 1, subsum);

        subset.pop_back();
        subsum -= cadidates[i];
        dfs(cadidates, target, i + 1, subsum);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        dfs(candidates, target, 0, 0);
        vector<vector<int>> ans;
        for(auto x: res){
            ans.push_back(x);
        }
        return ans;
    }
};
