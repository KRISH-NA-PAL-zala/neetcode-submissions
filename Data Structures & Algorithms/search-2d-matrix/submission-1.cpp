class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix.size();
        while(i < j){
            int k =  (j + i) / 2;
            int a = 0;
            int b = matrix[k].size();
            while(a < b){
                int x = (b + a) / 2;
                if(matrix[k][x] < target){
                    a = x + 1;
                }else if(matrix[k][x] > target){
                    b = x;
                }else return true;
            }
            if(matrix[k][matrix[k].size()/2] > target){
                j = k;
            }else if(matrix[k][matrix[k].size()/2] < target){
                i = k + 1;
            }
        }
        return false;
    }
};
