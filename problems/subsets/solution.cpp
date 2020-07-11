class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        set<vector<int> > ans;
        long n = nums.size();
        
        vector<vector<int> > res;
        for(long i = 0; i < pow(2,n); i++){
            
            vector<int> temp;
            for(long j = 0; j < n; j++){
                if(i & (1 << j) ){
                    temp.push_back(nums[j]);
                }
            }
            if(ans.find(temp) == ans.end()){
                res.push_back(temp);
            }
            ans.insert(temp);
        }
        return res;
        
    }
};