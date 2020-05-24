class Solution {
public:

    TreeNode* build_tree(vector<int>& preorder, vector <int> inorder, int In_start, int In_end, int &P_index, unordered_map <int, int> &mp){

        if(In_start > In_end){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[P_index]);
        int index = mp[preorder[P_index]];
        P_index++;
        root->left = build_tree(preorder,inorder,In_start,index-1,P_index,mp);
        root->right = build_tree(preorder,inorder,index+1,In_end,P_index,mp);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector <int> preorder1 = preorder;
        sort(preorder.begin(), preorder.end());
        vector <int> inorder = preorder;
        preorder = preorder1;
        int In_start = 0;
        int In_end = preorder.size() - 1;
        int P_index = 0;
        unordered_map <int, int> mp;
        for(int i = 0; i<inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        TreeNode * res = build_tree(preorder,inorder,In_start,In_end,P_index,mp);
        return res;
    }
};