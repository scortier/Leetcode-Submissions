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
    bool isSameTree(TreeNode* p, TreeNode* q) {        
        bool isSame = true;            // use to check
        recursiveHelper(p, q, isSame); // traverese tree recursively
        return isSame;                 // return result
    }
    
    void recursiveHelper(TreeNode* p, TreeNode* q, bool& isSame) {
        
        // base case
        if (!p && !q) {
            return;
        }
        
        // not same strucutre
        else if ( (!p && q) || (p && !q) ) {
            isSame = false;
            return;
        }
        
        // same strucutre
        else {
            
            // check same value
            if (isSame) {
                p->val != q->val ? isSame = false : isSame = true; // check
                recursiveHelper(p->left, q->left, isSame);         // traverse left
                recursiveHelper(p->right, q->right, isSame);       // traverse right
            }
            
            // not the same value
            else {
                return;
            }
        }
    }
};
