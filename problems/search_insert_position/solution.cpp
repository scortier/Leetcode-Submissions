class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
        if(target<nums[0])
            return 0;
        if(target>nums[n-1])
            return n;
        int res=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                res=i;
                break;
            }
            if(nums[i]>target)
            {
                res=i;
                break;
            }
                
        }
        return res;
        
    }
};