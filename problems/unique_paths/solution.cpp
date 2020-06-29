class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(2, vector<int>(n));
        for(int i=0;i<n;i++) {
            dp[0][i] = 1;
        }
        for(int i=1;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(j == 0) {
                    dp[1][j] = 1;
                } else {
                    dp[1][j] = dp[0][j] + dp[1][j-1];
                }
                dp[0][j] = dp[1][j];
            }
        }
        return dp[0][n-1];
    }
}; 