class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        // return nums[nums.size()-k];
        return nums[k-1];
        
    }
};