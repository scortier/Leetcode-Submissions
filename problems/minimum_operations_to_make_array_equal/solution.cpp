class Solution {
public:
    int minOperations(int n) {
        
        // new int
        
        int target;
        
        // looping
        
        
        // logic
        
        if (n % 2 == 1) target = 2 * (n / 2) + 1;
        
        
        // next cond
        
        else {
            int dividend = 2 * (n/2 - 1) + 1 + 2 * (n / 2) + 1;
            target = dividend / 2;
        }
        
        // result init zero
        

        int res = 0;
        
        // run till half
        

        for (int i = 0; i < n/2; i++){
            
            // logic of answer
            
            res += abs( target - (2*i + 1) );
        }
        
        // answer
        

        return res;
    }
    
    // end 
    
};