// Defs Started

#define fi first
#define se second
#define SZ(x) ((int)(x).size())

// Defs Ended 

class Solution {
public:
    // vector str 
    
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        // init 
        
        int n,m;
		n = SZ(rowSum);
		m = SZ(colSum);
        
        // vector ans 
        
		vector <vector<int>> res(n, vector<int>(m, 0));
        
        // for n numbs
        
		for (int i = 0; i < n; ++i) {
            // for m numbers
            
			for (int j = 0; j < m; ++j) {
                
                // least 
                
				int x = min(rowSum[i], colSum[j]);
				res[i][j] = x;
                
                // --
				rowSum[i] -= x;
                // --
                
				colSum[j] -= x;
			}
		}
        
        // answer 
		return res;
    }
    
    // end 
    
};