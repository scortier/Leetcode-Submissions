class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int n,i;
        n=nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        map<int,int> :: iterator it;
        int ans=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            ans+=it->second*(it->second-1)/2;
        }
        return ans;
    }
};
