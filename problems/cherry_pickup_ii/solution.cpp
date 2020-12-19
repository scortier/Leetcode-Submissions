class Solution {
    int dp[71][71][71];
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size()-1;
        int cols = grid[0].size()-1;
        int row = 0;
        int col1 = 0;
        int col2 = cols;
        memset(dp,-1,sizeof(dp));
        return maximiseCherry(grid, row, col1, col2);
    }
private:
    int maximiseCherry(vector<vector<int>>& grid, int row, int col1, int col2){
        if(row ==grid.size())
            return 0;
        if(col1<0 || col1>=grid[0].size() || col2<0 || col2>=grid[0].size())
            return INT_MIN;
        if(dp[row][col1][col2] != -1)
            return dp[row][col1][col2];
        int ans = INT_MIN;
        int curr = grid[row][col1] + grid[row][col2];
        if(col1==col2)
            curr -= grid[row][col1];
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1, col2));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1, col2 + 1));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1, col2 - 1));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1 + 1, col2));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1 + 1, col2 + 1));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1 + 1, col2 - 1));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1 - 1, col2));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1 - 1, col2 + 1));
        ans = max(ans, curr + maximiseCherry(grid, row+1, col1 - 1, col2 - 1));

        return dp[row][col1][col2] = ans;
    }
};