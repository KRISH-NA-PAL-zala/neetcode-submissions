class Solution {
    vector<pair<int, int>> dirs = {{1, 0},{-1, 0},{0, 1},{0, -1}};
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid[i].size();j++){
                if(grid[i][j] == 0){
                    q.push({i, j});
                }
            }
        }

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0;i < 4;i++){
                int x = row + dirs[i].first;
                int y = col + dirs[i].second;

                if(x < 0 || x >= grid.size() || y < 0 || y >= grid[x].size() || grid[x][y] != INT_MAX) continue;

                grid[x][y] = grid[row][col] + 1;
                q.push({x, y});
            }
        }
    }
};
