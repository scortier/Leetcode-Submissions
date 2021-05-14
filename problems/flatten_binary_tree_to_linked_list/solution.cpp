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
    TreeNode* dummy = new TreeNode();
    TreeNode* curr = dummy;
    void traversal(TreeNode* root){
        if(root==nullptr) return;
        TreeNode* temp = new TreeNode(root->val);
        curr->right = temp;
        curr = curr->right;
        traversal(root->left);
        traversal(root->right);
    }
    void flatten(TreeNode* root) {
        if(root==nullptr) return;
        traversal(root);
        root->left = nullptr;
        root->right = dummy->right->right;
    }
};