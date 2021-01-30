class Solution {
public:
    int minimumDeviation(vector<int>& a) {
        int n = a.size();
        priority_queue<int> range;
        int min_val = 1000000000;
        for (int x : a) {
            if (x % 2 == 1) {
                x *= 2;
            }
            range.push(x);
            min_val = min(min_val, x);
        }
        int ans = 1000000000;
        while (true) {
            int x = range.top();
            ans = min(ans, x - min_val);
            if (x % 2 == 1) break;
            range.pop();
            x /= 2;
            range.push(x);
            min_val = min(min_val, x);
        }
        return ans;
    }
};