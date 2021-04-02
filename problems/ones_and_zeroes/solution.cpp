class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int size=strs.size(); // no of strings in vector
        vector<pair<int,int>> v(size);  // vector to store count of 0s and 1s of every string
        for(int i=0;i<size;i++)
        {
            int one=count(strs[i].begin(),strs[i].end(),'1');
            int zero=strs[i].size()-one;
            v[i]={zero,one}; // no of zero and no of one
        }
        vector<vector<int>> dp(m+1,vector<int>(n+1,0)); // dp
        for(int k=0;k<size;k++) // taking every string
        {
            int one_count=v[k].second;
            int zero_count=v[k].first;
            for(int i=m;i>=zero_count;i--)
            {
                for(int j=n;j>=one_count;j--)
                {
                   if(i==0 && j==0) // this condition doesnt make any diff
                    {
                       // ignore <0,0>
                        continue;
                    }

                    dp[i][j]=max(dp[i][j],dp[i-zero_count][j-one_count]+1);
                }
            }
        }
        int ans=dp[m][n];
        return ans;
    }
};