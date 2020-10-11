class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        // vector unordered arr 
        
        vector<unordered_set<int>> link(n);
        
        // for looping 
        
        for (int i = 0; i < roads.size(); i++) {
            // const 
            
            const auto &r = roads[i];
            
            // insert 
            
            link[r[0]].insert(i);
            link[r[1]].insert(i);
        }
        
        // answer init 
        
        int ans = 0;
        
        // complex 
        
        for (int i = 0; i + 1< n; i++) {
            // for loping 
            
            for (int j = i + 1; j < n; j++) {
                int count = link[i].size();
                // for looping 
                
                for (int r : link[j]) {
                    
                    // incr counter 
                    
                    if (link[i].find(r) == link[i].end()) count++;
                }
                
                // max out of
                 
                ans = max(ans, count);
            }
            // end
        }
        // exit 
        
        return ans;
    }
    // end 
}; 