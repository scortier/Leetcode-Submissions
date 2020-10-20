class Solution {
public:
    map<Node*,Node*> help;

    Node *dfs(Node *node){
        if(help.find(node)!=help.end())return help[node];
        Node *clone=new Node(node->val);
        help[node]=clone;

        for(auto it:node->neighbors){
            clone->neighbors.push_back(dfs(it));
        }
        return help[node];
    }

    Node* cloneGraph(Node* node) {
       if(node==NULL)return NULL;
       return dfs(node);

    }
};