class Solution {
    
    // pulbi class 
    public int xorOperation(int n, int start) {
        
        // startin g
        
        int ans=start;
        
        // loop 
        for (int i = 1; i <n ; i++) 
        {
            
            // math 
            
            int num = start+2*i;
            ans=ans^num;
        }
        
        // exit
        
        return ans;
        
        // end 

        
    }
        
        // end 
        
}