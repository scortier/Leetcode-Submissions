class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long int> dp(target+1,0);
        for(auto n:nums){
            if(n<=target){
                dp[n] += 1;
            }
        }
        for(int i = 1;i<=target;i++){
            for(auto n:nums){
                if(i>n){
                    dp[i] += dp[i-n];
                }
            }
        }
        return dp[target];
    }
};