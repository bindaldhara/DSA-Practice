class Solution {
public:
    long long res = 0;
    
    int dfs(int i,vector<vector<int>>&adj,int seats,vector<bool>&vis){
        vis[i] = true;
        int cnt = 1;
        for(auto a : adj[i]){
            if(!vis[a])
                cnt += dfs(a,adj ,seats, vis);
        }
        if(i != 0)
            res += ceil((double) cnt/seats);
        return cnt;
    }
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n = roads.size();
        vector<vector<int>> adj(n + 1);
        vector<bool> vis(n + 1, false);
        for(int i = 0; i < n; i++){
            int u = roads[i][0];
            int v = roads[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(0,adj, seats, vis);
        return res;
    }
};