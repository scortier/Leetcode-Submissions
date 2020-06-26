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
    int helper(TreeNode* root, int num){
        if(!root) return num;
        num = num*10 + root->val;
        if(!root->left && !root->right) return num;
        int l=0,r=0;
        if(root->left) l = helper(root->left,num);
        if(root->right) r = helper(root->right,num);
        return l+r;
    }
public:
    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }
};