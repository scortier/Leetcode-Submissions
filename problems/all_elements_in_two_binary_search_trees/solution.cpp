class Solution {
public:
    
    void inOrder(TreeNode* root,vector<int>& v){
        if(!root)
            return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    
        //add nodes of both trees in diff vectors in sorted form
        vector<int> one,two;
        inOrder(root1,one);
        inOrder(root2,two);
        
        //Merge both sorted vectors
        int i=0,j=0;
        int n1 = one.size();
        int n2 = two.size();
        vector<int> ans;
        while(i<n1 && j<n2){
            if(one[i]<two[j])
                ans.push_back(one[i++]);
            else
                ans.push_back(two[j++]);
        }
        while(i<n1)
            ans.push_back(one[i++]);
        while(j<n2)
            ans.push_back(two[j++]);
            
        return ans;
    }
};