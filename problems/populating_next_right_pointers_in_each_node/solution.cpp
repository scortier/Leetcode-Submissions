/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
  Node *connect(Node *root)
  {
    if (!root || (!root->left && !root->right))
      return root;
    queue<Node *> pending;
    pending.push(root);

    while (pending.size())
    {
      int size = pending.size();
      vector<Node *> level;
      for (int i = 0; i < size; ++i)
      {
        auto elem = pending.front();
        pending.pop();
        level.push_back(elem);

        if (elem->left)
          pending.push(elem->left);
        if (elem->right)
          pending.push(elem->right);
      }

      for (int i = 0; i < size; ++i)
      {
        if (i == size - 1)
          level[i]->next = NULL;
        else
          level[i]->next = level[i + 1];
      }
    }
    return root;
  }
};