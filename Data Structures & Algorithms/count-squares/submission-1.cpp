class CountSquares {
    unordered_map<int, unordered_map<int, int>> m;
public:
    
    void add(vector<int> point) {
        m[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        const int x = point[0], y = point[1];
        int ans = 0;
        for(auto [y2, c] : m[x]) if(y2 != y) {
            int x2 = x + (y2 - y);
            ans += c * m[x2][y2] * m[x2][y];
            x2 = x - (y2 - y);
            ans += c * m[x2][y2] * m[x2][y];
        }
        return ans;
    }
};
