class Solution {
public:
    int helper(vector<vector<int>> &grid, int n , int m, int i, int j, vector<vector<int>> &dp){
        if((i==n&&j==m-1)||(i==n-1&&j==m))return 0;
        if(i==n||j==m) return 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        int down = grid[i][j] + helper(grid, n, m, i+1, j, dp);
        int right = grid[i][j] + helper(grid, n, m, i, j+1, dp);
        return dp[i][j] = min(down, right);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m,-1));
        int ans = helper(grid, n,m, 0, 0, dp);
        return ans ;
    }
};