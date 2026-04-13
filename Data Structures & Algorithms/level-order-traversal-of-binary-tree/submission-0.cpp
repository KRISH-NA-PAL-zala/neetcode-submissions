/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    void bfs(TreeNode* root, vector<vector<int>> &res, int lvl){
        if(!root) return;
        if(res.size() == lvl){
            res.push_back({root->val});
        }else{
            res[lvl].push_back(root->val);
        }
        bfs(root->left, res, lvl+1);
        bfs(root->right, res, lvl+1);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        bfs(root, res, 0);
        return res;
    }
};
