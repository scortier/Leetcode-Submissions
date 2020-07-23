class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum = 0;
        for (auto num : nums){
            sum^= num;
        }
        vector<int> ans{0,0};
        int lowbit = sum & (-sum);
        for(auto num : nums){
            if(lowbit & num) 
                ans[0] ^=num;
            else
                ans[1] ^=num;
        }
        return ans;
    }
};