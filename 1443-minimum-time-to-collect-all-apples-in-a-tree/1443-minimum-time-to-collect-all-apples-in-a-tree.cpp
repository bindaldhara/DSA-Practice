class Solution {
public:
     int dfs(vector<vector<int>>& adj, vector<bool> &visited, vector<bool> &hasApple, int cur) {
        if (visited[cur])
            return 0;
        visited[cur] = true;
        int sum = 0;
         
        for (auto &c : adj[cur]) {
            if (visited[c])
                continue;
            int temp = dfs(adj,visited,hasApple,c);
            if (temp) {
                sum += (temp+2);
            } else if (hasApple[c]) {
                sum += 2;
            }
        }
        return sum;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n,false); 
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        return dfs(adj,visited,hasApple,0);
    }
};