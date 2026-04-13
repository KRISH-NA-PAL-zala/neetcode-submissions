class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);
        stack<pair<int, int>> s; // temperature, index
        for(int i = 0;i < n;i++){
            int temp = temperatures[i];
            while(!s.empty() && temp > s.top().first){
                int x = s.top().second;
                res[x] = i - x;
                s.pop();
            }
            s.push({temp, i});
        }
        return res;
    }
};
