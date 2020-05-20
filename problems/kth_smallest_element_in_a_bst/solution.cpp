class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>r;
        while(true)
        {
            while(root)
            {
                r.push(root);
                root=root->left;
            }
            root=r.top();
            r.pop();
            if(--k==0) return root->val;
            root=root->right;
        }
        return -1;

    }
};