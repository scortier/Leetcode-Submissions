class Solution {
public:
    //Backtracking solution
    vector<vector<int>> ans;

    void backtrack(int k, int n, int curr, vector<int> sol) {
        if(k<0 || n<0) return;

        if(k==0 && n==0) {
            ans.push_back(sol);
            return;
        }

        for(int i=curr; i<10; i++) {
            sol.push_back(i);
            backtrack(k-1, n-i, i+1, sol);
            sol.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        backtrack(k, n, 1, {});
        return ans;
    }
};