class Solution {
public:
   vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graph,int u,vector<int> v1)
    {
        v1.push_back(u);
        if(u==graph.size()-1)
          ans.push_back(v1);
        else
        {
             for(auto i:graph[u])
                 dfs(graph,i,v1);
        }
        v1.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> v1;
        dfs(graph,0,v1);
        return ans;
    }
};