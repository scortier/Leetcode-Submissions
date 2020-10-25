class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        // new char
        char k = 0;
        // maximum number 
        
        int maxD = 0;
        for (int i = 0; i < releaseTimes.size(); i++) {
            
            // new char 
            
            char c = keysPressed[i];
            
            //  decision
            
            int time = releaseTimes[i] - (i > 0 ? releaseTimes[i - 1] : 0);
            
            // check max 
            
            if (time > maxD) {
                
                // assign 
                
                maxD = time;
                k = c;
            } else if (time == maxD) {
                
                // max of two 
                
                k = max(c, k);
            }
            // end 
            
        }
        // answer 
        
        return k;
    }
    // end 
}; 