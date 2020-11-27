class Solution {
    bool canPartitionUtil(vector<int> &nums, int end, int sum, vector<vector<int>> &DP){
        if(end < 0  || sum < 0)
            return false;

        if(DP[end][sum] != -1)
            return DP[end][sum];
        if(sum == 0)
        {
            DP[end][sum] = 1;
            return true;
        }

        bool res1 = canPartitionUtil(nums, end-1,sum-nums[end], DP);
        if(res1)
        {
            DP[end][sum] = 1;
            return true;
        }
        bool res2 = canPartitionUtil(nums, end-1,sum, DP);
        if(res2)
        {
            DP[end][sum] = 1;
            return true;
        }

        DP[end][sum] = 0;
        return false;
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int n:nums){
            sum += n;
        }
        if(sum & 1)
            return false;
        vector<vector<int>> DP(nums.size(),vector<int>((sum/2)+1,-1));
        return canPartitionUtil(nums, nums.size()-1, sum/2, DP);
    }
};