
class Solution {
    public int diagonalSum(int[][] mat) {
        // singular case
        
    	if(mat.length == 1) return mat[0][0];
        
        // init
        
    	int first=0, result=0;
    	int last=mat[0].length -1;
        
        // for looping
        
        for(int row=0; row < mat.length; row++) {
        	System.out.println("Row: "+row+" first: "+first+" last: "+last);
            // not even
            
        	if(mat.length %2 !=0 && last==mat.length/2) {
                
        		// NONE
        		System.out.println("done nothing");
        		result+=mat[row][first];
        	}
            else {
        		result+=mat[row][first]+mat[row][last];
        	}
            
            // print
            
        	System.out.println("elements: "+mat[row][first]+" "+mat[row][last]+" result: "+result);
            
            // fir incr
        	first++;
            
            // las decr
            
        	last--;
        }
        
        // exit with answer
        
        return result;
    }
}