class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int, int> m;
        stack<double> s;
        for(int i = 0;i < speed.size();i++){
            m[position[i]] = speed[i];
        }
        sort(position.rbegin(), position.rend());
        for(int i = 0;i < position.size();i++){
            double t = (double)(target - position[i]) / m[position[i]];
            if(s.empty() || t > s.top()){
                s.push(t);
            }
        }
        return s.size();
    }
};
