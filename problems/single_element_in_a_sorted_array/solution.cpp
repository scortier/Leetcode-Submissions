class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int xorv=0;
        for(int i=0;i<n;i++){
            xorv=xorv^nums[i];
            
        }
        return xorv;
    }
};