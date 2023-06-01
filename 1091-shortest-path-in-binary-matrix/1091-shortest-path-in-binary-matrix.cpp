class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1 || grid[grid.size()-1][grid.size()-1]==1){
            return -1;
        }
        queue<pair<pair<int, int>, int>> q;
        q.push({{0, 0}, 1});
        
        while(!q.empty()) {
            auto it=q.front();
            int row=it.first.first;
            int col=it.first.second;
            int dis=it.second;
            q.pop();
            if(row==grid.size()-1 && col==grid.size()-1) 
                return dis;
            if(row-1>=0 && grid[row-1][col]!=1){
                q.push({{row-1, col}, dis+1});
                grid[row-1][col]=1;
            }
            
            if(row+1<grid.size() && grid[row+1][col]!=1){
                q.push({{row+1, col}, dis+1});
                grid[row+1][col]=1;
            }
    
            if(col-1>=0 && grid[row][col-1]!=1){
                q.push({{row, col-1}, dis+1});
                grid[row][col-1]=1;
            }
           
            if(col+1<grid.size() && grid[row][col+1]!=1){
                q.push({{row, col+1}, dis+1});
                grid[row][col+1]=1;
            }
          
            if(row+1<grid.size() && col-1>=0 && grid[row+1][col-1]!=1){
                q.push({{row+1, col-1}, dis+1});
                grid[row+1][col-1]=1;
            }
          
            if(row+1<grid.size() && col+1<grid.size() && grid[row+1][col+1]!=1){
                q.push({{row+1, col+1}, dis+1});
                grid[row+1][col+1]=1;
            }
            
            if(row-1>=0 && col-1>=0 && grid[row-1][col-1]!=1){
                q.push({{row-1, col-1}, dis+1});
                grid[row-1][col-1]=1;
            }
           
            if(row-1>=0 && col+1<grid.size() && grid[row-1][col+1]!=1){
                q.push({{row-1, col+1}, dis+1});
                grid[row-1][col+1]=1;
            }
        }
        return -1;
    }
};