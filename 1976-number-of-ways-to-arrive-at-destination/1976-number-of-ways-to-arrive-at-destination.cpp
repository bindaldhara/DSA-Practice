#define mod 1000000007
#define pi pair<long, long>
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pi> adj[n];
        for(auto it : roads){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        priority_queue<pi, vector<pi>, greater<pi>> q;
        vector<long long> dist(n, LONG_MAX), ways(n, 0);
        q.push({0, 0});
        dist[0] = 0;
        ways[0] = 1;
        while(!q.empty()){
            long long node = q.top().second, dis = q.top().first;
            q.pop();
            if(dis > dist[node])
                continue;
            for(auto it : adj[node]){
                long long adjN = it.first, edW = it.second;
                if(dist[adjN] > dis + edW){
                    dist[adjN] = dis + edW;
                    q.push({dist[adjN], adjN});
                    ways[adjN] = ways[node];
                }
                else if(dist[adjN] == dis + edW)
                    ways[adjN] = (ways[adjN] + ways[node])%mod;
            }
        }
        return ways[n-1]%mod;
    }
};