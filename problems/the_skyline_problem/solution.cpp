class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>ot;
        if(buildings.size()==0)
            return ot;
        vector<vector<int>>l;
        for(int i=0;i<buildings.size();i++)
        {
            l.push_back({buildings[i][0],-buildings[i][2]});
            l.push_back({buildings[i][1],buildings[i][2]});
        }
        sort(l.begin(),l.end());
       multiset<int>pq;
        pq.insert(0);
        int mx=0;
        for(int i=0;i<l.size();i++)
        {
            if(l[i][1]<0)
            {
             pq.insert(-l[i][1]);
             //cout<<l[i][1]<<" ";
            }
           else {                                     
                pq.erase(pq.find(l[i][1]));
            }

            if (*pq.rbegin() != mx)
            {      
                ot.push_back({l[i][0], mx = *pq.rbegin()});
            }
        }
        return ot;
    }
}; 