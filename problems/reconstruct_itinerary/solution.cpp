#define pb push_back
#define all(v) v.begin(),v.end()
#define se second
#define fi first

class Solution {
public:
    
    
     void dfs(map<string,vector<string>> &m, string src,vector<string> &ans)
     {
         string s;
         while(!m[src].empty())
         {
             s=m[src].back();
             m[src].pop_back();
             dfs(m,s,ans);
         }
         ans.pb(src);
         return;
     }
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        
        map<string,vector<string>> m;
        vector<string> ans;
        for(auto it:tickets)
            m[it[0]].pb(it[1]);
        
        for(auto &it:m)
        {
            sort(all(it.se),greater<string>()); 
        }
        dfs(m,"JFK",ans);
        reverse(all(ans));
        return ans;
    }
};