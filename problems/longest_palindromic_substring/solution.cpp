class Solution {
public:
    string longestPalindrome(string s) {

        int i,j,n,mx=1,l;
        string ans;
        n=s.size();
        l=0;

        vector<vector<bool>> dp(n,vector<bool>(n,false));

        for(i=0;i<n;i++)
            dp[i][i]=true;

        for(j=0;j<n;j++)
        {
            for(i=0;i<j;i++)
            {
                if( (s[j] == s[i] && dp[i+1][j-1]) || (s[i]==s[j] && j==i+1))
                {
                    dp[i][j]=true;
                    if(j-i+1>mx)
                    {
                        mx=j-i+1;
                        l=i;
                    }
                }
            }
        }

        ans = s.substr(l,mx);

        return ans;
    }
};