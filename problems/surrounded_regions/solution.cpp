class Solution {
public:

    void dfs(vector<vector<char>>& a,vector<vector<int>>& b ,int i  , int j ,int n )
    {

        if(i<0||i>n-1||j<0||j>a[0].size()-1|| a[i][j]=='X'||b[i][j]==1)
        return ;

     if(a[i][j]=='O')
     {
        b[i][j]=1;

    dfs(a,b,i-1,j,n);

    dfs(a,b,i,j+1,n);
    dfs(a,b,i,j-1,n);
    dfs(a,b,i+1,j,n);
     }


    }
    void solve(vector<vector<char>>& a) {

        int n = a.size();
         if(!n)
        	return;
        int p = a[0].size();
     vector<vector<int>> b(n, vector<int> (p, 0));

      for(int i = 0 ;i<n;i++)
      {if(a[i][0]=='O')
          dfs(a,b,i,0,n);}

      for(int i = 0 ;i<n;i++)
      {   
          if(a[i][p-1]=='O')
          dfs(a,b,i,p-1,n);
      } 
       for(int j = 0 ;j<p;j++)
       {
           if(a[0][j]=='O')
          dfs(a,b,0,j,n);
       }
        for(int j = 0 ;j<p;j++)
        {
          if(a[n-1][j]=='O')
          dfs(a,b,n-1,j,n);
        }

        for(int i = 1;i<n-1;i++)
        {
            for(int j  = 1;j<p-1;j++)
            {
                if(a[i][j]=='O')
                {

                   if(b[i][j]!=1) 
                       a[i][j]='X';
                    }

            }
        }

    }
}; 