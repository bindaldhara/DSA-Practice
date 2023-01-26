class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
           queue<vector<int>> q;
        vector<int> dist(n, 1e9);
        for(auto it: flights){
            adj[it[0]].push_back({it[1], it[2]});
        }
        
        dist[src]  = 0;
        int stops =  0;
        q.push({0, src, 0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int stop = it[0];
            int node = it[1];
            int dis =  it[2];
            for(auto iter : adj[node]){
                if(dis + iter.second < dist[iter.first] && stop <=k){
                    dist[iter.first] = dis + iter.second;
                    q.push({stop + 1, iter.first, dist[iter.first]});
                }
            }
        }
        if(dist[dst]== 1e9) 
            return -1;
        return dist[dst];
    }
};