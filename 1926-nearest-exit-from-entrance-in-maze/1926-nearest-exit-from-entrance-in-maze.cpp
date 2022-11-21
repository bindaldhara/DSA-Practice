class Solution {
public:
    vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();
        
        queue<pair<int,int>> q;
        q.push({entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]] = '+'; 
        int cnt = 0;
        
        while(!q.empty()) {
            int size = q.size();
            
            while(size--) {
                pair<int, int> curr = q.front();
                q.pop();
                
                if((curr != make_pair(entrance[0],entrance[1])) && (curr.first == 0 || curr.first == m-1 || curr.second == 0 || curr.second == n-1))
                    return cnt;
                
                for(auto &dir : directions) {
                    int i = curr.first  + dir[0];
                    int j = curr.second + dir[1];

                    if(i >= 0 && i <=m-1 && j >= 0 && j <= n-1 && maze[i][j] != '+') {
                        q.push({i, j});
                        maze[i][j] = '+'; 
                    }
                }
                
            }
            cnt++;
        }
        
        return -1;
        
    }
};