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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool rev = false;

        while(!q.empty())
        {
            int sz = q.size();
            vector<int>currLevel;
            while(sz--)
            {
                TreeNode* curr = q.front();
                q.pop();
                currLevel.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(rev)
            {
                reverse(currLevel.begin(),currLevel.end());
                rev = false;
            }
            else
                rev = true;
            ans.push_back(currLevel);
        }

        return ans;
    }
};