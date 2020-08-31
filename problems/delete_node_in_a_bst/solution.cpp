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
  TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) {
      return nullptr;
    }

    if (root->val == key) {
      if (!root->right) {
        TreeNode* tmp = root;
        root = root->left;
        delete tmp;
      } else {
        TreeNode* cur = root->right;
        while (cur->left) {
          cur = cur->left;
        }

        cur->left = root->left;
        TreeNode* tmp = root;

        root = root->right;
        delete tmp;
      }
    } else if (key < root->val) {
      root->left = deleteNode(root->left, key);
    } else {
      root->right = deleteNode(root->right, key);
    }

    return root;
  }
};