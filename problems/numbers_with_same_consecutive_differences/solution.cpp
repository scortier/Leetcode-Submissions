class Solution {
public:
    void solve(vector<int>& ans,int N,int K,int i,string& temp)
    {
        if(i==N)
        {
            int a=stoi(temp);
            ans.push_back(a);
            temp=temp.substr(0,temp.size()-1);
            return;
        }
        if(i==0)
        {
            for(int j=1;j<=9;j++)
            {
                temp+=to_string(j);
                solve(ans,N,K,i+1,temp);
            }
        }
        else
        {
            for(int j=0;j<=9;j++)
            {
                if(abs((temp[i-1]-'0')-j)==K)
                {
                    temp+=to_string(j);
                    solve(ans,N,K,i+1,temp);
                }
            }
            temp=temp.substr(0,temp.size()-1);
        }
    }
    vector<int> numsSameConsecDiff(int N, int K) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<int> ans;
        if(N==1)
            ans.push_back(0);
        string temp="";
        solve(ans,N,K,0,temp);
        return ans;
    }
};