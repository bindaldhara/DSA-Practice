class Solution {
public:
    void dfs(vector<vector<int>> &adj,int i,vector<bool> &visited){
        if(visited[i])
            return ;
        visited[i]=true;
        
          for (int j = 0; j < adj[i].size(); j++) {
            dfs(adj,adj[i][j],visited);
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adj(n+1);
        for (vector<int> road: roads) {
            adj[road[0]].push_back(road[1]);
            adj[road[1]].push_back(road[0]);
        }
        vector<bool> visited(n+1,false);

        dfs(adj,1,visited);
        int minimumScore = INT_MAX;
        for (int i = 0; i < roads.size(); i++) {
            if (visited[roads[i][0]])
                minimumScore = min(minimumScore, roads[i][2]);
        }
        
        return minimumScore;
    }
};