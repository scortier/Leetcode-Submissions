class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        vector<vector<int>> dp(n, vector<int>(n, 0));
        vector<int> v = triangle[n-1];
        for(int i=0;i<v.size();i++)
        {
            dp[n-1][i] = v[i];
        }

        for(int i= n-2;i>=0;i--)
        {
            vector<int> temp = triangle[i];
            for(int j=0;j<temp.size();j++)
            {
                int maxSumLeft = dp[i+1][j];
                int maxSumRight = dp[i+1][j+1];
                int curr = temp[j];

                int sumPath = curr + min(maxSumLeft, maxSumRight);

                dp[i][j] = sumPath;
            }
        }
        return dp[0][0];
    }
};