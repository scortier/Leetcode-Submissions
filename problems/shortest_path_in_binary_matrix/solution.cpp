class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int i,j,n,r,c,mx,d=0,sz;
        n = grid.size();

        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;

        queue<pair<int,int>> q;
        q.push({0,0});

        while(!q.empty())
        {   
            sz=q.size();
            d++;

            while(sz--)
            {
                auto k=q.front();
                q.pop();

                if(k.first==n-1 && k.second==n-1)
                    return d;

                for(i=-1;i<=1;i++)
                {
                    for(j=-1;j<=1;j++)
                    {   
                        r=k.first+i;
                        c=k.second+j;

                        if(r>=0 && c>=0 && r<n && c<n && grid[r][c]==0)
                        {
                            q.push({r,c});
                            grid[r][c] = 1; //marking as visited

                        }
                    }
                }
            }
        }

        return -1;
    }
};