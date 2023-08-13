class Solution {
public:
    int countHomogenous(string s) {
        int i,cnt=0,ans=0,mod=1e9+7,curr=0;
        for(auto a:s)
        {
            if(a==curr)
                cnt+=1;
            else 
                cnt=1;
            curr=a;
            ans=(ans+cnt)%mod;
        }
        return ans;
    }
};
