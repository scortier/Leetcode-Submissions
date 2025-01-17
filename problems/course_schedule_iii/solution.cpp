class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(begin(courses), end(courses), comp);
        priority_queue<int> pq;

        int curTime = 0;
        for(auto x : courses){
            pq.push(x[0]); 
            curTime += x[0];
            if (curTime > x[1]){ 
                curTime -= pq.top(); 
                pq.pop();
            }
        }
        return pq.size();
    }
};