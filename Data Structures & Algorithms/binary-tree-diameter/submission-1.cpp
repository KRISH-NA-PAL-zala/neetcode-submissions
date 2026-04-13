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
    int res = 0;
public:
    int dfs(TreeNode* root){
        if(!root) return -1;

        int l = dfs(root->left);
        int r = dfs(root->right);
        res = max(res, 2 + l + r);

        return 1 + max(l, r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int hight = dfs(root);
        return res;
    }
};
