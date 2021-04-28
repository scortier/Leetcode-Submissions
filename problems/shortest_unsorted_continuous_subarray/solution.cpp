class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return 0;
        }
        vector<int> newNums = nums;
        sort(newNums.begin(), newNums.end());
        int i = 0, j = n - 1;

        while (i < j)
        {
            if (nums[i] == newNums[i])
            {
                i++;
            }

            if (nums[j] == newNums[j])
            {
                j--;
            }

            if (nums[i] != newNums[i] && nums[j] != newNums[j])
            {
                break;
            }
        }
        if (i == j)
            return 0;
        else
            return (j - i + 1);
    }
};