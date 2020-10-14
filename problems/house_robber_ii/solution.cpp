class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
     int t1=nums[nums.size()-1],t2=0;
        for(int i=nums.size()-2;i>=1;i--){
            int k=t1;
          t1=max(t1,t2+nums[i]);
          t2=k;
        }
        if(nums.size()==1)
            return t1;
    int p1=nums[nums.size()-2],p2=0;
        for(int i=nums.size()-3;i>=0;i--){
            int k=p1;
          p1=max(p1,p2+nums[i]);
          p2=k;
        }
        return max(t1,p1);
    }
};
