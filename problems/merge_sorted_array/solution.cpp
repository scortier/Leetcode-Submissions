class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int idx1 = m - 1;
        int idx2 = n - 1;
        int back = nums1.size() - 1;

        while (idx2 >= 0 && idx1 >= 0)
        {
            if (nums1[idx1] < nums2[idx2])
            {
                nums1[back] = nums2[idx2];
                back--;
                idx2--;
            }
            else
            {
                nums1[back] = nums1[idx1];
                back--;
                idx1--;
            }
        }

        while (idx1 >= 0)
        {
            nums1[back] = nums1[idx1];
            idx1--;
            back--;
        }

        while (idx2 >= 0)
        {
            nums1[back] = nums2[idx2];
            idx2--;
            back--;
        }
    }
};