class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& vis, int src, int& res) {
        if (vis[src]) return;
        vis[src] = 1;
        res++;
        for (int& b : adj[src]) dfs(adj, vis, b, res);
    }
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> adj(n, vector<int>());
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) 
                    continue;
                long long x1 = bombs[i][0], y1 = bombs[i][1], x2 = bombs[j][0], y2 = bombs[j][1];
                long long r1 = bombs[i][2], rr = pow((x1 - x2), 2) + pow((y1 - y2), 2);
                if (r1 * r1 >= rr) adj[i].push_back(j);
            }
        }

        vector<int> vis(n, 0);
        int res = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            dfs(adj, vis, i, cnt);
            fill(vis.begin(), vis.end(), 0);
            res = max(res, cnt);
        }
        return res;
    }
};