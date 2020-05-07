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
    // defining variables
    
    int xp=-1;
    int yp=-1;
    int heightx(TreeNode* root, int n,int p){
        if(root==NULL) return -1;
        if(root->val==n) xp=p;
        int h=-1;
        // logical execution
        if((root->val==n) or (h=heightx(root->left,n,root->val))>=0 or (h=heightx(root->right,n,root->val))>=0) return h+1;
        // returning alue
        return h;
    }
    
    // defining other variables
    
    int heighty(TreeNode* root, int n,int p){
        
        // logical execution 2.0
        
        if(root==NULL) return -1;
        if(root->val==n) yp=p;
        int h=-1;
        if((root->val==n) or (h=heighty(root->left,n,root->val))>=0 or (h=heighty(root->right,n,root->val))>=0) return h+1;
        return h;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        int xh=heightx(root,x,-1);
        int yh=heighty(root,y,-1);
        cout<<xh<<endl<<yh<<endl<<xp<<endl<<yp<<endl;;
        if(xh==yh && xp && yp && xp!=yp) return true;
        return false;
    }
};