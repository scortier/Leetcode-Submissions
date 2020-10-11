class Solution {
public:
    int maxDepth(const string &s) {
        
        // initialize 
        
        int d = 0;
        
        // result 
        
        int res = 0;
        // character s
        
        for (char c : s) {
            // condition 
            
            if (c == '(') {
                d++;
            } else if (c == ')') {
                d--;
            }
            
            // max out ans
            
            res = max(d, res);
        }
        
        // return answer 
        
        return res;
    }
};