

class Solution {
    public int numSubmat(int[][] mat) {
        
        // init answers
        
        
        int ans = 0;
        
        // array 
        
        int[][] sum = new int[mat.length+1][mat[0].length+1];
        
        
        /*
        
        for (i in mat.indices) {
            for (j in mat[0].indices) {
                if (i > 0 && j > 0 && mat[i][j] > 0)
                
                */
        for(int i = 0;i<mat.length;i++){
            
            // ofrl oopig 
            
            for(int j = 0;j<mat[0].length;j++){
                
                // add 
                
                sum[i+1][j+1] = sum[i+1][j]+sum[i][j+1]-sum[i][j]+mat[i][j];
            }
        }
        
        /*
        
        for (i in mat.indices) {
            for (j in mat[0].indices) {
                if (i > 0 && j > 0 && mat[i][j] > 0)
                
                */
        
        
        /// answeerr 
        
        ans = sum[mat.length][mat[0].length];
        
        // for looppg 
        
        for(int row = 1;row<=mat.length;row++){
            
            // loop 
            
            for(int column = 1;column<=mat[0].length;column++){
                
                // lenght 
                
                for(int i = 1;i+row-1<sum.length;i++){
                    
                    // lenght 
                    
                    for(int j = 1;j+column-1<sum[0].length;j++){
                        
                        // if looping 
                        
                        if(row==1&&column==1)
                            
                            // cont 
                            
                            continue;
                        
                        /// if looping 
                        
                        if(sum[i+row-1][j+column-1]-sum[i+row-1][j-1]-sum[i-1][j+column-1]+sum[i-1][j-1]==row*column)
                            
                            // incr 
                            
                            ans++;
                        
                        // end 
                        
                    }
                }
            }
        }
        
        // exit 
        
        return ans;
    }

    
    // testing 
    
    public static void main(String[] args) 
    {
        
        // test 
        
        int[][] nums = {{0,1,1,0},{0,1,1,1},{1,1,1,0}};
        
        // classs 
        
        Solution test = new Solution();
        
        // output 
        
        System.out.println(test.numSubmat(nums));
    }
    
    // end 
}

// exit
