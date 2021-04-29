class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0)
        {
            return {-1, -1};
        }
        int lend = -1;
        int hend = -1;

        lend = binsearch(nums, target, true);
        if(lend == n || nums[lend]!=target)
        {
            return {-1, -1};
        }
        hend = binsearch(nums, target, false)-1;
        return {lend, hend};
    }

private:
    int binsearch(vector<int> A, int k, bool b)
    {
        int low = 0;
        int high = A.size();
        while(low<high)
        {
            int m = low + (high-low)/2;
            if(A[m]>k || (b && A[m]==k))
            {
                high = m;
            }
            else
            {
                low = m+1;
            }
        }
        return low;
    }
};