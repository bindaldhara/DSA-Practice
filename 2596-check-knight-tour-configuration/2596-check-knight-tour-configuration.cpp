class Solution {
public:
    void helper(int i, int j, int n, int m, vector<vector<int>>&grid, vector<vector<int>>&vis, int cnt){
        vis[i][j]=1;
        cnt++;
        
        int dr[8]={2, 2,-2, -2,-1, 1, -1, 1};
        int dc[8]={1, -1, 1, -1, 2, -2, -2, 2};
        
        for(int l=0; l<8; l++){
            int nr= i+ dr[l];
            int nc=j+ dc[l];
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==cnt && vis[nr][nc]!=1){
                helper(nr, nc, n, m, grid, vis, cnt);
            }
        }
    }
    
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n, vector<int>(m, 0));
        helper(0, 0, n, m, grid, vis, cnt);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(vis[i][j]==0){
                    return false;
                }
            }
        }
        return true;
        
    }
};
