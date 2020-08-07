class Node{
public:
    int val;
    int Y;
    Node(int v,int y)
    {
        val=v;
        Y=y;
    }
};
class Solution {
    map<int,vector<Node>>mp;
public:
    static bool cmp(Node a,Node b)
    {
        if(a.Y==b.Y) return a.val < b.val;
        return a.Y > b.Y;
    }
    void find(TreeNode*r,int x,int y)
    {
        if(r==NULL) return;
        mp[x].push_back(Node(r->val,y));
        find(r->left,x-1,y-1);
        find(r->right,x+1,y-1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        find(root,0,0);
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            sort((it->second).begin(),(it->second).end(),cmp);
            vector<int>pb;
            for(auto a:it->second) pb.push_back(a.val);
            ans.push_back(pb);
        }
        return ans;
    }
};