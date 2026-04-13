class Solution {
public:
    void makezeroes(vector<vector<int>>& matrix, int row, int col){
        for(int i = 0;i < matrix[row].size();i++){
            matrix[row][i] = 0;
        }
        for(int i = 0;i < matrix.size();i++){
            matrix[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> new_mat = matrix;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                if(!matrix[i][j]){
                    makezeroes(new_mat, i, j);
                }
            }
        }
        matrix = new_mat;
    }
};
