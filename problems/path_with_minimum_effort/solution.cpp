class Solution {
public:
    int minimumEffortPath(const vector<vector<int>>& h) {
        
        // get in front  and sizeing 
        
        int n = h.size(), m = h.front().size();
        // vector array 
        
        vector<vector<int>> e(n, vector<int>(m, int(1e9))); 
        // vector array 
        vector<vector<bool>> flag(n, vector<bool>(m));

        
        // vector array 
        
        vector<int> dx = {-1, 0, 1, 0};
        vector<int> dy = {0, 1, 0, -1};

        // list array
        
        list<pair<int, int>> li = {{0, 0}};
        flag[0][0] = true;
        e[0][0] = 0;
        
        // while loop 
        
        while (!li.empty()) {
            auto [x, y] = li.front();
            flag[x][y] = false;
            
            // remove  1st 
            
            li.pop_front();
            
            // slow 
            
            for (int i = 0; i < 4; i++) {
                
                // eqn 
                
                int tx = x + dx[i], ty = y + dy[i];
                
                // excecution 
                
                if (tx >= 0 && ty >= 0 && tx < n && ty < m) {
                    
                    // array 
                    
                    int ef = max(e[x][y], abs(h[x][y] - h[tx][ty]));
                    
                    // logical execution 
                    
                    if (ef < e[tx][ty]) {
                        e[tx][ty] = ef;
                        
                        // array 
                        
                        if (!flag[tx][ty]) {
                            // truew
                            
                            flag[tx][ty] = true;
                            
                            // add at last 
                            
                            li.push_back({tx, ty});
                        }
                        // end
                    }
                    //end
                }
                // end 
            }
            // end
        }
        
        // answer 
        
        return e[n - 1][m - 1];
    }
}; 