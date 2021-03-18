class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {

        int i,j,n,ans,c=0,f;
        n = nums.size();

        if(n==1 )
            return n;

        f=3;
        for(i=1;i<n;i++)
        {
           if(nums[i]>nums[i-1])
           {    
               if(f==3 || f==1)
               {    
                   c++;
                   f=2;
               }
           }
           else if(nums[i]<nums[i-1])
           {   
               if(f==3 || f==2)
               {
                   f=1;
                   c++;
               }
           }

        }

        ans=c+1;

        return ans;
    }
};