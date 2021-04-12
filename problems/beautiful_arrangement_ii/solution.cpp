class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res(n);
        if(k==1)
        {
            for(int i=0;i<n;i++)
            {
                res[i]=i+1;
            }

        }
        else
        {
            int low = 1;
            int high = k+1;

            for(int i=0;i<=k;i++)
            {
                res[i] = i%2 ? high-- : low++;

            }
            for(int i=k+1;i<n;i++)
            {
                res[i] = i+1;
            }
        }
        return res;
    }
};