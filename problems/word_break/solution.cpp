class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        int n,i,j;
        n=s.size();

        set<string> st;
        vector<int> dp(n+1,false);
        dp[0]=true;

        for(auto k:wordDict)
            st.insert(k);

        for(i=1;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(dp[j])
                {
                    string w=s.substr(j,i-j);

                    if(st.find(w)!=st.end())
                    {
                        dp[i]=true;
                        break;
                    }
                }
            }
        }

        return dp[n];

    }
};