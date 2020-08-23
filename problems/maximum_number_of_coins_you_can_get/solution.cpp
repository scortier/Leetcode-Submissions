class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        // sorting 
        
        sort(piles.begin(),piles.end());
        int i=0,j=piles.size()-2,c=0;
        
        // while loop 
        
        while(j>i)
        {
            
            // logic 
            
         c=c+piles[j];
            j=j-2;
            i+=1;
        }
        
        // exit c
        
        return c;
    }
};