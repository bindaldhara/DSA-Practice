class Solution {
public:
    bool helper(int row,int col,int n,int m,vector<vector<char>>& grid){
        if(row>=0 && row<n && col>=0 && col<m && grid[row][col]=='1')
            return true;
        return false;
    }
    void dfs(int row,int col,int n,int m,vector<vector<char>>& grid){
        grid[row][col]='0';
        if(helper(row+1,col,n,m,grid))
            dfs(row+1,col,n,m,grid);
         if(helper(row-1,col,n,m,grid))
            dfs(row-1,col,n,m,grid);
         if(helper(row,col+1,n,m,grid))
            dfs(row,col+1,n,m,grid);
         if(helper(row,col-1,n,m,grid))
            dfs(row,col-1,n,m,grid);
    }
        int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,n,m,grid);
                       cnt++;
                }
            }
        }
        return cnt;
    }
};

