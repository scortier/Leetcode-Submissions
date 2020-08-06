class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> out;
        for(int i=0;i<n;i++)
        {
            int pos=abs(nums[i])-1;
            if(nums[pos]<0)
               out.push_back(abs(nums[i])) ;
            nums[pos]=-nums[pos];
            
        }
        return out;
    }
};