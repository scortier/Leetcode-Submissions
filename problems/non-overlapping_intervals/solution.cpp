class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return 0;
        sort(intervals.begin(), intervals.end(), [&](vector<int> a, vector<int> b) {
            return a[1] < b[1];
        });
        int cnt = 0, i=0, j;
        while (i < intervals.size()-1) {
            j = i+1;
            while (j<intervals.size() and intervals[i][1] > intervals[j][0]) {
                ++j;
                ++cnt;
            }
            i = j;
        }
        return cnt;
    }
}; 