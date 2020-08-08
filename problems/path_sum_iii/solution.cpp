class Solution {
public:
//helper function to count number of paths
    int pathSum_vdoutRoot(TreeNode *root , int sum){
        if(root == nullptr) return 0;
        
        int result = 0;
        
        if(root->val == sum)    result++;
        result += pathSum_vdoutRoot(root->left ,sum-root->val);
        result += pathSum_vdoutRoot(root->right ,sum-root->val);
        
        return result;
    }
    //given function template
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        
        return pathSum(root->left,sum) + pathSum_vdoutRoot(root, sum) + pathSum(root->right , sum);
    }
};