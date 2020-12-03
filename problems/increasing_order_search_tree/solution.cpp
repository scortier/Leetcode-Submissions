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
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)
            return NULL;

        TreeNode* l = increasingBST(root->left);
        root->right = increasingBST(root->right);
        root->left = NULL;

        TreeNode* temp = l;
        while(temp && temp->right) {
            temp = temp->right;
        }
        if(l) {
            temp->right = root;
            return l;
        }
        return root;
    }
};