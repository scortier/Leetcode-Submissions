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
    int diff = 0;

public:
    void helper(int minval,int maxval, TreeNode *node) {
        if (node == nullptr)
            return;
        diff = max(diff, max(abs(minval-node->val),abs(maxval-node->val)));
        minval = min(minval,node->val);
        maxval = max(maxval,node->val);
        helper(minval,maxval,node->left);
        helper(minval,maxval,node->right);
    }

    int maxAncestorDiff(TreeNode* root) {
        if (root)
            helper(root->val,root->val,root);
        return diff;
    }
};