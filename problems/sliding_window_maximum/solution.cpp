class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        std::deque<int> q;
        std::vector<int> res;
        int left = 0;
        for(int i = 0; i < nums.size(); ++i){
            while(!q.empty() && q.back() < nums[i]) q.pop_back();
            q.push_back(nums[i]);
            while(i - left + 1 > k){
                if(nums[left++] == q.front()) q.pop_front();
            }
            if(i - left + 1 == k) res.push_back(q.front());
        }
        return res;
    }
};