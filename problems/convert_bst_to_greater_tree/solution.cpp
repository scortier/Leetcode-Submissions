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
public:
    int sum = 0;
    void rev_inorder(TreeNode* root) {
        if (root == NULL)return;
        rev_inorder(root->right);
        root->val = sum += root->val;
        rev_inorder(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        rev_inorder(root);
        return root;
    }
};