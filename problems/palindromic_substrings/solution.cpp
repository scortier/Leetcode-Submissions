class Solution {
public:
    int countSubstrings(string s) 
    {
        int n = s.size(), count = 0;
        bool dp[n][n];
        memset(dp, false, sizeof(dp));

        for(int gap = 0; gap < n; ++gap)
        {
            for(int i = 0, j = i+gap; j < n; ++i, ++j)
            {
                if(gap == 0)
                    dp[i][j] = true;

                else if(gap == 1)
                    dp[i][j] = s[i] == s[j];

                else
                    dp[i][j] = s[i] == s[j] && dp[i+1][j-1];

                if(dp[i][j])
                    ++count;
            }
        }
        return count;
    }
};