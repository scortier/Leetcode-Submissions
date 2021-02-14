class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> grp(n);
        for(int i=0; i<n; i++){
            if (grp[i] != 0) continue;

            queue<int> q;
            q.push(i);
            grp[i] = 1;
            while(q.size()){
                int cur = q.front();
                q.pop();
                for(auto& next : graph[cur]){
                    if (grp[next] == 0){
                        grp[next] = -grp[cur];
                        q.push(next);
                    }
                    else if (grp[cur] == grp[next]) return false;
                }
            }
        }
        return true;
    }
};