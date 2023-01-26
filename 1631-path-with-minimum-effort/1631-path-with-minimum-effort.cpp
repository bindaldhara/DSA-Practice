class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
       priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>> pq; 
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> dis(n, vector<int>(m, 1e9));
        int dir_x[]={-1,0,1,0};
        int dir_y[]={0,1,0,-1};
           dis[0][0]=0;
        pq.push({0,{0,0}});
        
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int diff=it.first;
            int row=it.second.first;
            int col=it.second.second;
            if(row==n-1 && col==m-1)
                return diff;
            for(int i=0;i<4;i++){
                int new_row=row+dir_x[i];
                int new_col=col+dir_y[i];
                if(new_row>=0 && new_col>=0 && new_row<n && new_col<m){
                    int effort=max(abs(heights[new_row][new_col]-heights[row][col]),diff);
                    if (effort < dis[new_row][new_col]) {
                        dis[new_row][new_col] = effort;
                        pq.push({effort, {new_row, new_col}}); 
                    }
                }
            }
            
        }
        return 0;
    }
};
    
