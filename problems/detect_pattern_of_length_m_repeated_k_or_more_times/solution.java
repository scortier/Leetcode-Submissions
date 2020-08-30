class Solution {
    public boolean containsPattern(int[] arr, int m, int k) {
        
        // condition
        
    	if(m > arr.length) return false; // negative
        
        
        // new assign
        
    	int[] pattern= new int[m];
    	int repeat;
        
        // for loop cond
        
        for(int i=0; i<= arr.length-m;i++) {
        	System.arraycopy(arr, i, pattern, 0, m);
        	repeat=1;
            
            // for lopoping
            
        	for(int j=i+m;j<= arr.length-m; j+=m) {
                
                // more conditoon
                
        		if(found(arr, j, pattern)) {
        			repeat++;
        		}else {
        			break;
        		}
                
                // postive
                
        		if(repeat == k) return true;
        	}
        }
        
        // exit 0
        return false;
    }
    
    // end
    
    
    // ++
    
    private boolean found(int[] arr, int j, int[] pattern) {
    	for(int i=0; i<pattern.length; i++) {
    		if(arr[j+i] != pattern[i]) return false;
    	}
        
        // exit 1
        
    	return true;
    }
    
    // end
}

// end
