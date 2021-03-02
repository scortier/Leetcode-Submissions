class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> s(2);
        int n = nums.size();
        int i, sum = 0;
        vector<int> count(n + 1, 0);
        for (i = 0; i < n; i++){
            sum += nums[i];
            count[nums[i]]++;
            if (count[nums[i]] > 1){
                s[0] = nums[i];
                break;
            }
        }
        for (i++; i < n; i++)
            sum += nums[i];
        s[1] = n * (n + 1) / 2 - sum + s[0];
        return s;
    }
};