class BSTIterator {
public:
    vector<int> ans;
    int ind;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(TreeNode* root) {
        ans.clear();
        inorder(root);
        ind=-1;
    }

    int next() {
        if(ind+1<=ans.size()-1 && ind+1>=0){
            ind++;
            return ans[ind];
        }
        return -1;
    }

    bool hasNext() {
        if(ind+1>=0 && ind+1<=ans.size()-1) return true;
        return false;
    }
};
