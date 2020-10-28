class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        int n = a.size();
        vector<string> ans;
        if(n == 0) return ans;

        int s = a[0], e = a[0];
        for(int i = 1; i < n; i++) {
            if(a[i] != e + 1) {
                if(s == e) ans.push_back(to_string(s));
                else ans.push_back(to_string(s) + "->" + to_string(e));
                s = e = a[i];
            }
            else e = a[i];
        }
        if(s == e) ans.push_back(to_string(s));
        else ans.push_back(to_string(s) + "->" + to_string(e));

        return ans;
    }
}; 