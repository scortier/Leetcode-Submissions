class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n == 0|| s[0] == '0') return 0;
        vector<int> dp(n+1, 0);
        //start w dp[0] = 1 , since number has to start w >=1 && <=9
        dp[0] = 1;
      // this is done to cope up with the logic of for loop  
        dp[1] = dp[0];
        for(int i = 2; i <= n; i++ ){
            // obserbve here it will be greater than zero
            if(s[i - 1] - '0' > 0 && s[i -1] - '0' <= 9){
                dp[i] += dp[i-1];
            }
            int num = (s[i - 2] - '0') * 10 + s[i - 1] - '0' ;
            if(num >= 10 && num <= 26){
                dp[i] += dp[i-2];
            }
        }
        return dp[n];
        
    }
};