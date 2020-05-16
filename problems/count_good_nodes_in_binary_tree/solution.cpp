class Solution {
public:
    
    // new integer and chars
    
    
    int good(TreeNode * root, int mm)
    {
        // new integer and chars
        int ans=0;
        // if else looping condition 
        
              if(!root)
                  // return value
                  
                  return 0;
        // new chars
        
        mm=max(mm,root->val);
        // logicl execution
        
             ans+=good(root->left,mm);
        ans+=good(root->right,mm);
        
        // if else logical input 
            
        if(mm<=root->val)
        {
           // answering loop
            ans++;
        }
        return ans;
    }
    
    // new integers
    
    
    int goodNodes(TreeNode* root) {
        
        // if looping
        
        if(!root) return 0;
        
        // new integer 
        
        int mm=root->val;
        
        // retrning value
        
        return good(root,mm);
        
    }
};