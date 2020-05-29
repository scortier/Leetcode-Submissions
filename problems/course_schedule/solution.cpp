class Solution {
public:

    bool dfs(vector<int> adj[],vector<bool>& vis,vector<bool>& ancestor,int s)
    {
        vis[s]=true;
        ancestor[s]=true;

        for(auto k:adj[s])
        {
            if(!vis[k])
            {
                if(dfs(adj,vis,ancestor,k))
                    return true;
            }

            else if(vis[k]==true && ancestor[k]==true)
                return true;
        }

        ancestor[s]=false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int i,n,a,b;
        vector<int> adj[numCourses];
        vector<bool> vis(numCourses,false);
        vector<bool> ancestor(numCourses,false);

        n=prerequisites.size();

        for(i=0;i<n;i++)
        {
            a=prerequisites[i][0];
            b=prerequisites[i][1];

            adj[b].push_back(a);
        }

        for(i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                if(dfs(adj,vis,ancestor,i))
                    return false;
            }
        }

        return true;


    }
};