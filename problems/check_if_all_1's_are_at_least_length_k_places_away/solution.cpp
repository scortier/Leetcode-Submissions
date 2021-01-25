class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(c<k)return false;
                else c=0;
            }
            else 
                c++;

        }
        return true;
    }
};