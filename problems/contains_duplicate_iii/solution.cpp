class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n = nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
            v.push_back(make_pair(nums[i],i));
        
        //Sort By Value
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            
                //If diff is >t, then break
                if(v[j].first > v[i].first+t)
                    break;
                    
                if(abs(v[j].second - v[i].second) <= k)
                    return true;
            }
        }
        return false;
    }
};