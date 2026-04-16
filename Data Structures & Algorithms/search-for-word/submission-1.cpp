class Solution {
    bool dfs(vector<vector<char>>& board, string word, int row, int cell, int i){
        if(i == word.size()){
            return true;
        }
        if(row >= board.size() || cell >= board[row].size() || board[row][cell] == '#' || board[row][cell] != word[i]) return false;

        board[row][cell] = '#';
        bool res = (
            dfs(board, word, row, cell + 1, i + 1) || 
            dfs(board, word, row, cell - 1, i + 1) ||
            dfs(board, word, row + 1, cell, i + 1) ||
            dfs(board, word, row - 1, cell, i + 1)
        );
        board[row][cell] = word[i];
        return res;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int freqFirst = 0, freqLast = 0;
        for(int i = 0;i < board.size();i++){
            for(int j = 0;j < board[i].size();j++){
                if(board[i][j] == word.front()) freqFirst++;
                if(board[i][j] == word.back()) freqLast++;
            }
        }

        if(freqLast < freqFirst) reverse(word.begin(), word.end());

        for(int i = 0;i < board.size();i++){
            for(int j = 0;j < board[i].size();j++){
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
