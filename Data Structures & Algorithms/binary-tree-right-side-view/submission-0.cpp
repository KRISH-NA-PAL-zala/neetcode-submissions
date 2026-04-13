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
    void dfs(TreeNode* root, vector<vector<int>> &res, int lvl){
        if(!root) return;
        if(res.size() == lvl){
            res.push_back({root->val});
        }else{
            res[lvl].push_back(root->val);
        }
        dfs(root->left, res, lvl+1);
        dfs(root->right, res, lvl+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> bfs_res;
        vector<int> res;
        dfs(root, bfs_res, 0);
        for(auto i: bfs_res){
            res.push_back(i.back());
        }
        return res;
    }
};
