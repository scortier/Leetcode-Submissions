class Solution
{
public:
    bool isMonotonic(vector<int> &A)
    {
        bool incr = true, decr = true;
        int n = A.size();
        for (int i = 1; i < n; i++)
        {
            incr &= A[i - 1] <= A[i];
            decr &= A[i - 1] >= A[i];
        }
        return incr || decr;
    }
};