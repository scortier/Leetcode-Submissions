class Solution {
public:
    int count_sub(vector<int> & v,int t)
    {
        int n = v.size(), sum = 0, ans = 0;
        unordered_map<int,int> m;
        m[0] = 1;
        for(int i = 0; i < n; i++)
        {
            sum += v[i];
            if(m.count(sum - t))
                ans += m[sum - t];
            m[sum]++;
        }
        return ans;
    }

    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0)
            return 0;
        int n = matrix.size(), m = matrix[0].size(), ans = 0;
        for(int j = 0; j < m; j++)
        {
            vector<int> arr(n, 0);
            for(int k = j; k < m; k++)
            {
                for(int i = 0; i < n; i++)
                    arr[i] += matrix[i][k];
                ans += count_sub(arr, target);
            }
        }
        return ans;
    }
};