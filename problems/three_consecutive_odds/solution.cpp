class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // new ints 
        
        int n = (int)arr.size();
        
        // if looping 
        
        if (n <= 2) return false;
        
        for (int i = 2; i < n; i++){
            
            // condition 1 
            
            // logic 
            
            
            if ( arr[i] % 2 == 1 && arr[i-1] % 2 == 1 && arr[i-2] % 2 == 1) 
                // positive 
                
                return true;
        }
        
        // neg. 
        
        
        return false;
    }
    
    // end 
};