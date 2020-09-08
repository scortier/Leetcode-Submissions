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
    void BST(TreeNode* root,string& s,int& ans)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans+=stoi(s+to_string(root->val),0,2);
            return;
        }
        if(root->left!=NULL)
        {
            string temp=s;
            s+=to_string(root->val);
            BST(root->left,s,ans);
            s=temp;
        }
        if(root->right!=NULL)
        {
            string temp=s;
            s+=to_string(root->val);
            BST(root->right,s,ans);
            s=temp;
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        if(root==NULL)
            return ans;
        string s="";
        BST(root,s,ans);
        return ans;
    }
};