class Solution {
public:
    
    // initalize
    
    int numWaterBottles(int numBottles, int numExchange) 
    {
        // total 
        
        int total = numBottles;
        
        // zero 
        
        int numEmpty = total;
        
        // condition 
        
        while (numEmpty >= numExchange)
        {
            numEmpty -= numExchange;
            
            // incr by 1
            
            numEmpty++;
            
            // incr total by 1
            
            total++;
        }
        
        // exit
        
        return total;
    }
    
    // end 
};