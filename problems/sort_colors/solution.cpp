class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0, w=0, b=0;
        for (int i : nums) {
            if (i == 0)
                ++r;
            else if (i == 1)
                ++w;
            else if (i == 2)
                ++b;
        }
        for (int i=0; i<r; ++i)
            nums[i] = 0;
        for (int i=r; i<r+w; ++i) 
            nums[i] = 1;
        for (int i=r+w; i<nums.size(); ++i)
            nums[i] = 2;
    }
};