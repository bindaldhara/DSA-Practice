class Solution {
public:
    void dfs(vector<vector<int>>& arr,vector<int> &vis,int node){
        vis[node]=1;
        
        for(auto child:arr[node]){
            if(vis[child]==1)continue;
            else if(vis[child]==0){
                dfs(arr,vis,child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> arr(n);
        vector<int> vis(n+1,0);
        
        for(auto e:edges){
            arr[e[0]].push_back(e[1]);
            arr[e[1]].push_back(e[0]);
        }
        dfs(arr,vis,source);
        return vis[destination]==1;
    }
};