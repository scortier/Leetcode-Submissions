class Solution {

    public int numSpecial(int[][] mat) {
        // result init
        
        int res = 0;
        
        // length 
        for (int i = 0; i < mat.length; i++) {
            
            // incr
            
            for (int j = 0; j < mat[0].length; j++) {
                if (mat[i][j] == 1) {
                    // recur
                    
                    if (isUnique(i, j, mat)) res++;
                }
            }
            // end
        }
        
        // exit result 
        return res;
    }
    
    
    // unique 
    
    public boolean isUnique(int i, int j, int[][] mat) {
        // for loop 
        
        for (int m = 0; m < mat.length; m++) {
            // i,j
            if (m == i) continue;
            
            // 0
            if (mat[m][j] == 1) return false;
        }
        // for looping
        
        for (int n = 0; n < mat[0].length; n++) {
            if (n == j) continue;
            
            // 0
            if (mat[i][n] == 1) return false;
        }
        
        // true
        
        return true;
    }
    //end
}

// exit