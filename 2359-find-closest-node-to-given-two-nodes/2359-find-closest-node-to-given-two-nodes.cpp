class Solution {
public:
    void dfs(int node,vector<int> &edges,vector<int> &dist,int d){
        if(node == -1 || dist[node] != -1){
            return;
        }
        dist[node] = d;
        dfs(edges[node],edges,dist,d+1);
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> dist1(n,-1);
        vector<int> dist2(n,-1);
        vector<int> adj[n];
        
        dfs(node1,edges,dist1,0);
        dfs(node2,edges,dist2,0);
        
        int ans = -1;
        int dist = INT_MAX;
        for(int i=0;i<n;i++){
            if(dist1[i] != -1 && dist2[i] != -1){
                if(dist1[i] != -1 && dist2[i] != -1){
                  int d = max(dist1[i],dist2[i]);
                  if(dist>d){
                      ans = i;
                      dist = d;
                  }
                }
            }
        }
        return ans;
    }
};