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
    
    // new ints 
    
    int countPairs(TreeNode* root, int distance) 
    {
        
        // loopig  
        
        if (root == nullptr) {
            return 0;
        }
        
        // vector vals 
        
        vector<int> ds(distance);
        return countPairs(root, distance, ds);
    }
    
    // new class 
    

private:
    int countPairs(TreeNode* node, int distance, vector<int>& ds) 
    {
        
        // looping  in pvt 1 
        
        if (node->left == nullptr && node->right == nullptr) 
        {
            if (distance > 1) 
            {
                
                // ++ 
                
                ++ds[1];
            }
            return 0;
        }
        
        // next false cond 
        
        else if (node->left == nullptr) {
            int res = countPairs(node->right, distance, ds);
            
            // for loops
             
            for (int i = distance - 1; i > 0; --i) {
                ds[i] = ds[i - 1];
            }

            return res;
        }
        
        // els eloop 
        
        else if (node->right == nullptr) {
            int res = countPairs(node->left, distance, ds);
            
            // for loops
             
            for (int i = distance - 1; i > 0; --i) 
            {
                ds[i] = ds[i - 1];
            }

            
            // exit
             
            return res;
        }
        
        // other comns 
        
        else {
            int res = 0;
            
            // vector hashs 
            
            vector<int> dsLeft(distance);
            vector<int> dsRight(distance);
            res += countPairs(node->left, distance, dsLeft);
            
            
            // count pairs
             
            res += countPairs(node->right, distance, dsRight);

            for (int i = distance - 1; i > 0; --i) {
                ds[i] = dsLeft[i - 1] + dsRight[i - 1];
            }
            
            // for looping 
            
            for (int i = 1; i < distance; ++i) 
            {
                
                // array
                
                dsRight[i] += dsRight[i - 1];
                res += dsLeft[distance - i] * dsRight[i];
            }
            
            // exit
            

            return res;
        }
        
        // end
    }
    
    // end
}; 

// end 
