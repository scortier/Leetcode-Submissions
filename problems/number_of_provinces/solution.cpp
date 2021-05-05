class Solution {
    vector<int> parent;
    
    int find(int x)
    {
        return parent[x]==x?x:find(parent[x]);
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
    
    
        int n=isConnected.size();
        
        parent.resize(n+1,0);
        
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }
        
        int count=isConnected.size();
        
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    int x=find(i);
                    int y=find(j); 
                    if(x!=y)
                    {
                        count--;
                        parent[y]=x;
                    }
                }
            }
        }
        
     return count;  
    
    }
};