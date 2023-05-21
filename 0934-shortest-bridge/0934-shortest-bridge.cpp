class Solution {
public:
    queue<pair<int,int>> q;
    int dirX[4] = {-1,0,1,0};
    int dirY[4] = {0,-1,0,1};
    void dfs( vector<vector<int>>& grid,vector<vector<bool>>& vis, int x, int y, int n){
       vis[x][y]=true;
       q.push({x,y});
       for(int i=0; i<4; i++){
           int currX = x + dirX[i];
           int currY = y + dirY[i];
           if(currX >= 0 && currX < n && currY >= 0 && currY < n){
               if(!vis[currX][currY] && grid[currX][currY] == 1)
                  dfs(grid, vis, currX, currY, n);
           }
       }
    }

    void bfs(vector<vector<int>>& grid,vector<vector<bool>>& vis, int n, int& dist){
        while(!q.empty()){
           int m = q.size();
           while(m--){
               int x = q.front().first, y = q.front().second;
               q.pop();
               for(int i=0; i<4; i++){
                  int currX = x + dirX[i];
                  int currY = y + dirY[i];
                  if(currX >= 0 && currX < n && currY >= 0 && currY < n){
                     if( !vis[currX][currY] ){
                        if(grid[currX][currY] == 1)
                           return;
                        q.push({currX, currY});
                        vis[currX][currY] = true;
                     }
                  }
               }
           }
           dist++;
        }
    }
   
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        int firstX =-1 , firstY=-1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                  firstX = i;
                  firstY = j;
                  break;
                }
            }
            if(firstX != -1)
             break;
        }

       vector<vector<bool>> vis(n, vector<bool>(n, false));
       dfs(grid, vis, firstX, firstY, n);
       int dist = 0;
       bfs(grid, vis,n, dist);

       return dist;
    }
};