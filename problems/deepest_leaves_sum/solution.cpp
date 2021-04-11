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
    int getHeight(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(getHeight(root->left),getHeight(root->right));
    }
    void helper(TreeNode* root,int height,int &sum){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL && height==1){
            sum=sum+root->val;
            return;
        }
        height -=1;
        helper(root->left,height,sum);
        helper(root->right,height,sum);

    }
    int deepestLeavesSum(TreeNode* root) {
        int height = getHeight(root);
        int sum = 0;
        helper(root,height,sum);
        return sum;
    }
};