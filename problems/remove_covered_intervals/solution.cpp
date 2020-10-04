class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int n = intervals.size();

        int start = intervals[0][0];
        int end = intervals[0][1];
        int cnt=1;

        for(int i=1;i<n;i++){
            if(start == intervals[i][0]){
                end = intervals[i][1];
                continue;
            }
            else if(end < intervals[i][1]){
                end = intervals[i][1];
                start = intervals[i][0];
                cnt++;
            }
        }

        return cnt;
    }
};