class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> g[numCourses];
         vector<int> ind(numCourses,0);

        for(auto eq : prerequisites){
            g[eq[1]].push_back(eq[0]);
            ind[eq[0]]++;
        }

        vector<int> res;
        queue<int> q;

        for(int i=0;i<numCourses;i++){
            if(ind[i]==0){
                q.push(i);
            } 
        }

        int ctr=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();

            res.push_back(u);

            for(int v:g[u]){
                ind[v]--;
                if(ind[v]==0) q.push(v);
            }

            ctr++;
        }

        if(ctr!=(numCourses)){
            vector<int> empty;
            return empty;
        } else return res;

    }
}; 