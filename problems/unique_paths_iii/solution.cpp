class Solution {
    int sz,_sz,no=0,ans=0;
    pair<int,int> start;
public:
    void travel(int x,int y,vector<vector<int>> &grid,int hm){
        if(x==sz || y==_sz || x<0 || y<0)
            return;

        if(grid[x][y] == 1 || grid[x][y]==-1)
            return;

        if(grid[x][y]==2){
            if(hm==no) ++ans;
            return;
        }

        grid[x][y]=-1;
        ++hm;

        travel(x+1,y,grid,hm);
        travel(x-1,y,grid,hm);
        travel(x,y+1,grid,hm);
        travel(x,y-1,grid,hm);
        grid[x][y]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        sz = grid.size();
        _sz = grid[0].size();

        for(int i=0;i<sz;i++)    
            for(int j=0;j<_sz;j++){   
                if(grid[i][j]==0)
                    ++no;
                if(grid[i][j]==1){
                    start = {i,j};
                }
            }

        travel(start.first+1,start.second,grid,0);
        travel(start.first-1,start.second,grid,0);
        travel(start.first,start.second+1,grid,0);
        travel(start.first,start.second-1,grid,0);
        return ans;
    }
};