class Solution {
public:
    int countVowelStrings(int n) {
        int k = 5;
        // dp[i][j] means count of sorted vowel strings of length 'i' starting with vowel 'j'
        vector<vector<int>> dp(n+1, vector<int>(k));

        for(int i = 1; i <= n; i++) {
            for(int j = k-1; j >= 0; j--)
                dp[i][j] =  (j == k-1 ? 1 : dp[i][j+1] + dp[i-1][j]);
        }
        return accumulate(dp[n].begin(), dp[n].end(), 0);
    }
};