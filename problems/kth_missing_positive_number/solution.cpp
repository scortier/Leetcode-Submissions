class Solution {
public:
    
    // defs.
    
    int findKthPositive(vector<int>& arr, int k) 
    {
        // vector integer mapping 
        
        vector<int> mp(2001, 0);
        
        // for loop
        
        for(int a : arr)
        {
            // incr by one 
            
            mp[a]++;
        }
        // while llooop 
        
        int i = 1, ki = 0;
        
        while(ki < k)
        {
            
            // if looping
            
            if(mp[i] == 0)
            {
                // incr by one
                
                ki++;
            }
            
            // incr by 1
            
            i++;
        }
        // exit
        
        return i-1;
    }
    // end
    
};

// exit
