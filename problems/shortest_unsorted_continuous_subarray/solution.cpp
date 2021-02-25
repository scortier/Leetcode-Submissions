class Solution 
{
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l < nums.size() - 1)
        {
            if (nums[l] > nums[l + 1])
            {
                break;
            }
            l++;
        }

        while (r > l)
        {
            if (nums[r] < nums[r - 1])
            {
                break;
            }
            r--;
        }

        if (r == l) return 0;

        int minval = INT_MAX;
        int maxval = INT_MIN;
        int i = l;
        while (i <= r)
        {
            if (nums[i] < minval)
            {
                minval = nums[i];
            }

            if (nums[i] > maxval)
            {
                maxval = nums[i];
            }

            i++;
        }

        while (l >= 0 && nums[l] > minval)
        {
            l--;
        }
        l++;

        while (r < nums.size() && nums[r] < maxval)
        {
            r++;
        }
        r--;

        return r - l + 1; 
    }
};