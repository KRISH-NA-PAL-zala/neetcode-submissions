class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i < 9;i++){
            set<int> s = {};
            for(int j = 0;j < 9;j++){
                int num = board[i][j] - '0';
                if(num > 0 && num <= 9 && s.contains(num)) return false;
                s.insert(num);
            }
        }

        for(int i = 0;i < 9;i++){
            set<int> s = {};
            for(int j = 0;j < 9;j++){
                int num = board[j][i] - '0';
                if(num > 0 && num <= 9 && s.contains(num)) return false;
                s.insert(num);
            }
        }

        for(int row = 0;row < 9;row += 3){
            for(int col = 0;col < 9;col += 3){
                set<int> s = {};
                for(int i = row;i < row + 3;i++){
                    for(int j = col;j < col + 3;j++){
                        int num = board[i][j] - '0';
                        if(num > 0 && num <= 9 && s.contains(num)) return false;
                        s.insert(num);
                    }
                }
            }
        }

        return true;
    }
};