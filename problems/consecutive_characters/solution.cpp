class Solution {
public:
    // defining new var
    
    int maxPower(string s) {
        // if else conditon
                
           if(s.size()==0) return 0;
        // new char
        
        char p=s[0];
        // new vars
        
        int ans=0;
        int a=0;
        // for looping condition 
        
        for(auto it:s)
        {
            
            // if else looping
            
            if(it==p)
            {
                a++;
                // rsult
                ans=max(ans,a);
            }
            else
            {
               
                ans=max(ans,a);
                // result
                 a=1;
            }
            // final
            
            p=it;
            
        }
        // returning ans.
        
        return ans;
        
        
    }
};