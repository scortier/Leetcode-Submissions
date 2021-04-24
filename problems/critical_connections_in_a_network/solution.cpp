class Solution {
public:
    vector<vector<int> > res;
    vector<vector<int> > g;
    vector<int> low,ord;
    vector<bool> vis;
    int cnt = 0;
    void dfs(int node,int parent){
        vis[node] = true;
        low[node] = ord[node] = cnt++;
        for(int i:g[node]){
            if(!vis[i]){
                dfs(i,node);
                low[node] = min(low[node],low[i]);
                if(ord[node] < low[i])
                    res.push_back({node,i});
            }
            else if(i!=parent) low[node] = min(low[node],ord[i]);
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        g.resize(n);
        for(vector<int> i:connections){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        vis.resize(n,false);
        ord.resize(n,0);
        low.resize(n,0);
        for(int i=0;i<n;i++)
            if(!vis[i])
                dfs(i,-1);
        return res;
    }
};