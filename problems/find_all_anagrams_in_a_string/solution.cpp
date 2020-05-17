class Solution {
public:
    
    // vector integer 
    
    vector<int> findAnagrams(string s, string p) {  
        vector<int> res;
                // new vars
        
        int n = s.size();
        int m = p.size();
// if else looping 
        
        if(s.size()==0 || m > n)
            return res;

        vector<int> pFreq(26, 0);
        vector<int> currWinFreq(26, 0);
        
        // for looping 
        
        
        for(int i=0; i<m; i++)
        {
            pFreq[p[i]-'a']++;
            currWinFreq[s[i]-'a']++;
        }
        // for looping 
        
        for(int i=m; i<n; i++)
        {
            if(pFreq == currWinFreq)
                res.push_back(i-m);
            currWinFreq[s[i-m]-'a']--;
            currWinFreq[s[i]-'a']++;
        }
        if(pFreq == currWinFreq)
            res.push_back(n-m);
        
        
        // answer 
        
        return res;
        
    }
};