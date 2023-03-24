class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<vector<int>>>adj(n);
        int cnt=0;
        queue<vector<int>>q;
        for(auto e:connections){
            adj[e[0]].push_back({e[1],e[1]});
            adj[e[1]].push_back({e[0],e[1]});
        }
        q.push({0,-1});
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            for(auto neighbour:adj[node[0]]){
                if(neighbour[0]!=node[1]){
                    if(neighbour[1]!=node[0]){
                        cnt++;
                    }
                    q.push({neighbour[0],node[0]});

                }
            }
        }
        return cnt;
    }
};


