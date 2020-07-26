class Solution {
public:
    
    // new str
    
    string restoreString(string s, vector<int>& is) 
    {
        
        // split and size 
        
    string ans(s.size(), '.');
        
        // for looping
        
    for (int i = 0; i <  s.size(); i++) ans[is[i]] = s[i];
        
        // answer 
        
    return ans;
        
        // end
    }
    
    // exit
};