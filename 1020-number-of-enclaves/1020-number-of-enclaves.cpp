class Solution {
public:
    
      void dfs(int x,int y, vector<vector<int>> &grid,int n, int m)
    {
        if(x<0 || x>=n || y<0 || y>=m ) return ; 
        if(grid[x][y]==0) return ; 
      
       
        grid[x][y]=0;  
         dfs(x-1,y,grid,n,m); 
         dfs(x+1,y,grid,n,m);
         dfs(x,y-1,grid,n,m);
        dfs(x,y+1,grid,n,m);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                if((i*j==0 || i==n-1 || j==m-1)&&grid[i][j]) dfs(i,j,grid,n,m);
            }
        }
        
       
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 )
                {
                    c++;
                }
            }
        }
      
        return c;  
    }
};