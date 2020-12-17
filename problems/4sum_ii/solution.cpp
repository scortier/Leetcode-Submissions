class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {

        int i,j,k,n,ans=0;
        n=A.size();

        unordered_map<int,int> m;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                m[C[i]+D[j]]++;   
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {   
                k = -(A[i]+B[j]);
                if(m.find(k)!=m.end())
                    ans += m[k];
            }
        }

        return ans;

    }
};