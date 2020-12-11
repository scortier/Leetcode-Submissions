class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int cnt = 0, cur = 0, pre = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[cur] == nums[i]) {
            if (cnt == 0) {
                cnt++;
                nums[++cur] = nums[i];
            }
        } else {
            nums[++cur] = nums[i];
            cnt = 0;
        }
    }
    return cur+1;
}
};