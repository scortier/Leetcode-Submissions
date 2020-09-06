class Solution {
public:
    string modifyString(string s) {
        
        // length
        
        int len = s.size();
        
        // 2 
        if (len < 2) {
            // arr
            
            if (s[0] == '?') return "a";
            return s;
        }
               
        
        // for loop
        
        for (int i = 0; i < len; i++) {
            
            // ??
            if (s[i] == '?') {
                
                // char a to z
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    if (i == 0) {
                        
                        // cont
                        
                        if (s[1] == ch) continue;
                    } else if (i == len -1) {
                        
                        // cont
                        
                        if (s[i - 1] == ch) continue;
                        
                        // cont
                    } else if (s[i - 1] == ch || s[i + 1] == ch) continue;
                    
                    
                    // break
                    
                    s[i] = ch;
                    break;
                } 
                
                // end
            }
            
            // end
        }
        
        // exit
        
        
        return s;
    }
    
    // end
};