class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int s = nums[0], f = nums[nums[0]];
        
        while(s != f)
        {
            s = nums[s];
            f = nums[nums[f]];
        }
        
        s = 0;
        
        while(s != f)
        {
            s = nums[s];
            f = nums[f];
        }
        
        return s; 
    }
};