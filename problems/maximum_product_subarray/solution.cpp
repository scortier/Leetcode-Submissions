class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct,minproduct,ans,choice1,choice2;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                maxproduct=nums[i];
                minproduct=nums[i];
                ans=nums[i];
            }
            else
            {
                choice1=maxproduct*nums[i];
                choice2=minproduct*nums[i];
                maxproduct=max({nums[i],choice1,choice2});
                minproduct=min({nums[i],choice1,choice2});
                ans=max(maxproduct,ans);
            }
        }
        return ans;
    }
};