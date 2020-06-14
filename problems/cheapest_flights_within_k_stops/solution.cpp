class Solution {
  public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst,
                          int K) {
        vector<vector<int>> dp(K + 2, vector<int>(n, 1e8));
        dp[0][src] = 0;
        for (int i = 1; i < K + 2; i++) {
            dp[i][src] = 0;
            for (auto const &x : flights) {
                dp[i][x[1]] = min(dp[i][x[1]], dp[i - 1][x[0]] + x[2]);
            }
        }
        if (dp[K + 1][dst] == 1e8) {
            return -1;
        }
        return dp[K + 1][dst];
    }
};