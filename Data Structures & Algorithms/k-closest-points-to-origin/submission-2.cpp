class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> h;
        vector<vector<int>> res;
        for(auto point: points){
            int d = point[0] * point[0] + point[1] * point[1];
            h.push({d, point});
            if(h.size() > k){
                h.pop();
            }
        }
        while(!h.empty()){
            res.push_back(h.top().second);
            h.pop();
        }
        return res;
    }
};
