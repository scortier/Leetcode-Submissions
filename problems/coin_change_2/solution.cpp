class Solution {
public:
    int change(int amount, vector<int>& coins) {
        const int c = coins.size();
        vector<int> dp(amount+1,0);
        dp[0]=1;
        for(int i =0;i<c;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(j>=coins[i])
                {
                    dp[j] = dp[j]+dp[j-coins[i]];
                }
            }
        }
        return(dp[amount]);
    }
};