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
    void dfs(TreeNode* root, int &res, int maxVal){
        if(!root) return;
        if(root->val >= maxVal){
            maxVal = root->val;
            res++;
        }
        dfs(root->left, res, maxVal);
        dfs(root->right, res, maxVal);
    }
public:
    int goodNodes(TreeNode* root) {
        int res = 0;
        dfs(root, res, INT_MIN);
        return res;
    }
};
