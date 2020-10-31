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
    TreeNode *firstInvalid = nullptr, *secInvalid = nullptr, *prev = nullptr;

public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(firstInvalid->val, secInvalid->val);
    }

    void inorder(TreeNode *root) {
        if(!root)   return;

        inorder(root->left);

        if(!firstInvalid and prev and root->val < prev->val)    firstInvalid = prev;
        if(firstInvalid and root->val < prev->val)  secInvalid = root;
        prev = root;

        inorder(root->right);
    }
};