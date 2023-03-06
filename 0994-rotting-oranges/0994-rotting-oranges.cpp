class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        queue<pair<pair<int,int>,int>>q; 
        vector<vector<int>>vis(n,vector<int>(m,0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push({{i, j}, 0}); 
                vis[i][j] = 2;
            }
            else 
                vis[i][j] = 0;
        }
    }
    
    vector<vector<int>>d={{-1,0},{0,-1},{1,0},{0,1}};
    int time=0;
    
    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        q.pop();
        
        time=max(time,t);
        
        for(int i=0;i<4;i++)
        {
            int nr=r+d[i][0];
            int nc=c+d[i][1];
            
                    if(nr<n && nc<m && nr>=0 && nc>=0 && grid[nr][nc]==1 &&vis[nr][nc]!=2)
            {
                q.push({{nr,nc},t+1});
                vis[nr][nc]=2;
            }
                
        }   
    }
    
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if(vis[i][j]!=2 && grid[i][j]==1)
                return -1;
        }
    }
    return time;    
    }
};