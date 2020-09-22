class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int limit = n / 3;

        unordered_map<int,int> cnt;

        vector<int> result;

        for(auto num : nums){
            if(cnt.find(num) == cnt.end()){
                cnt[num] = 0;
            }
            cnt[num]++;
        }

        for(auto iter = cnt.begin() ; iter != cnt.end(); iter++ ){
            if(iter->second > limit){
                result.push_back(iter->first);
            }
        }

        return result;
    }
};