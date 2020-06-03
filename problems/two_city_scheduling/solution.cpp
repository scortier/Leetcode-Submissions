class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),[](vector<int>& a,vector<int>& b){
            return a[0]-a[1]<b[0]-b[1];
        });
        for(int i=0;i<costs.size();i++)
        {
            for(int j=0;j<costs[i].size();j++)
                cout<<costs[i][j]<<"    ";
        }
        int ans=0;
        for(int i=0;i<costs.size()/2;i++)
        {
            ans+=costs[i][0];
            ans+=costs[costs.size()-i-1][1];
        }
        return ans;
    }
};