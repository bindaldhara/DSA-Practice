class Solution {
public:
    
    int dfs(vector<vector<int>>& grid,int i,int j){
        if(j>=grid[0].size() || i>=grid.size() || grid[i][j]<=0)
            return 0;
        int tot = 0;
        grid[i][j] = 0;
        int up = dfs(grid,i-1,j);
        int down = dfs(grid,i+1,j);
        int left = dfs(grid,i,j-1);
        int right = dfs(grid,i,j+1);
        tot = 1+left+right+up+down;
        return tot;
}
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int columns=grid[0].size();
        int marea=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(grid[i][j]==1)
                    marea=max(marea,dfs(grid,i,j));
            }
        }
        
        return marea;
    }
};



























