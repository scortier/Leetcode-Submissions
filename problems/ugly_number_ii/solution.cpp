class Solution {
public:
    int nthUglyNumber(int n) {
            int i2 = 0;
            int i3 = 0;
            int i5 = 0;
            int dp[n];
            int nm2 = 2;
            int nm3 = 3;
            int nm5 = 5;
            dp[0]=1;
            for(int i=1;i<n;i++)
            {
                 int k = min(nm2,min(nm3,nm5));
                 dp[i] = k;      
                 if(k==nm2)
                 {
                    i2++;
                    nm2 = dp[i2]*2;
                 }
                 if(k==nm3)
                 {
                         i3++;
                         nm3 = dp[i3]*3;
                 }  
                 
                 if(k==nm5)
                 {
                      i5++;
                      nm5 = dp[i5]*5;   
                 }
                        
                
            }
            
            return dp[n-1];
            
        
    }
};