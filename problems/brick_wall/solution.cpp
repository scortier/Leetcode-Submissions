class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        if(wall.size()==0)
        {
            return 0;
        }

        unordered_map<int, int> mp;

        int count = 0;
        for(vector<int> v : wall)
        {
            int end = 0;
            for(int i = 0;i<v.size()-1;i++)
            {
                end+=v[i];
                mp[end]++;
                count = max(count, mp[end]);
            }
        }
        return wall.size() - count;
    }
};