class Solution {
public:
    int maxSubArray(vector<int>& nums) {
               
        int dp[nums.size()];
        int sum = dp[0] = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            dp[i] = max(nums[i], nums[i] + dp[i-1]);
            if(dp[i] > sum) sum = dp[i];
        }
        return sum;
    }
};