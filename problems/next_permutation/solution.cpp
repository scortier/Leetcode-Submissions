class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i,idx1=-1,idx2,n;
        n = nums.size();
        
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx1=i;
                break;
            }
        }
        
        if(idx1==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[idx1])
            {
                idx2=i;
                break;
            }
        }
        
        swap(nums[idx1],nums[idx2]);
        reverse(nums.begin()+idx1+1,nums.end());
    }
};