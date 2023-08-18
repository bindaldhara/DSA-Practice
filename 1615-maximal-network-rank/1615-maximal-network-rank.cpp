class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map<int,vector<int>> adj;
        for(auto u:roads){
            adj[u[0]].push_back(u[1]);
            adj[u[1]].push_back(u[0]);
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int isconnected=0;
                for(auto u:adj[i])
                    if(u==j){
                        isconnected=1;
                         break;
                        }
                ans=max(ans,(int)adj[i].size()+(int)adj[j].size() - isconnected);
            }
        }
        return ans;
    }
};