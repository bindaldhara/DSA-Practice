class Solution {
public:
   void dfs(vector<vector<int>> &adj, int &cnt, vector<bool> &vis, int node){
        vis[node] = true;
        for (auto neighbor : adj[node]){
            if (!vis[abs(neighbor)]){
                cnt += neighbor < 0 ? 1 : 0;
                dfs(adj, cnt, vis, abs(neighbor));
            }
        }
    }
    int minReorder(int n, vector<vector<int>> &connections){
        int cnt = 0;
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);
        for (auto &con : connections){
            adj[con[0]].push_back(-con[1]);
            adj[con[1]].push_back(con[0]);
        }
        dfs(adj, cnt, vis, 0);
        return cnt;
    }
};


