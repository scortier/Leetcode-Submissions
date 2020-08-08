class Solution {
public:
    
    // bools 
    
    bool canConvertString(string s, string t, int k) {
        
        // if loop 
        
        if(s.size() != t.size()){
            return false;
        }
        
        // if loop 
        
        
        if(k == 0){
            return s == t;
        }
        
        
        // vector 
        
        vector<int> cnt(26, k / 26);
        for(int i = 1; i < 26; i++){
            cnt[i] += k % 26 >= i;
        }
        //for loop 
        
        for(int i = 0; i < s.size(); i++){
            int c1 = s[i] - 'a';
            int c2 = t[i] - 'a';
            
            
            // diff 
            
            int diff = (c2 + 26 - c1) % 26;
            if(diff == 0){
                continue;
            }
            
            // couter 
            
            
            cnt[diff]--;
            if(cnt[diff] < 0){
                return false;
            }
        }
        
        // exit
        
        
        return true;
    }
};