class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0,sum=0;
        for(int i=0;i<32;i++)
        {
            sum=0;
            for(auto num:nums)
            {
                if(((num>>i)&1)==1)
                    sum++;
            }
            
            sum%=3;
            if(sum!=0)
                ans+=(sum<<i);
        }
        return ans;
        
    }
};