class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        vector<pair<int, int> >firstIndex;
        for(int i=0;i<intervals.size();i++)
        {
            int x = intervals[i][0];
            firstIndex.push_back({x, i});
        }
        
        vector<int>ans;
        sort(firstIndex.begin(), firstIndex.end(), [](const pair<int, int>&p1, const pair<int, int>&p2)
             {
                 return p1.first < p2.first;
             });
        

        
        for(int i=0;i<intervals.size();i++)
        {
            int l = 0, r = firstIndex.size()-1;
            int y = intervals[i][1];
            
            while(l < r)
            {
                int mid = l + (r - l)/2;
                
                if(firstIndex[mid].first >= y)
                    r = mid;
                else
                    l = mid + 1;
            }
            
            if(firstIndex[l].first < y)
                ans.push_back(-1);
            else
                ans.push_back(firstIndex[l].second);
        }
        return ans;
    }
};