class Solution {
public:
    vector<int>adj[10001];
    int id[10001];
    int count=0;
    bool visited[10001];
    void dfs(int src){
        visited[src]=true;
        id[src]=count;
        for(auto edge:adj[src]){
            if(!visited[edge]) 
                dfs(edge);
        }
    }
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        
        for(int i=threshold+1;i<=n;i++){
            for(int j=2*i;j<=n;j+=i){
                adj[i].push_back(j);
                adj[j].push_back(i);           
            }
        }
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=n;i++){
            if(!visited[i]) {
                count++;
                dfs(i);
            }
        }
        int q=queries.size();
        vector<bool>ans(q);
        for(int i=0;i<q;i++){
            if(id[queries[i][0]]==id[queries[i][1]]) 
                ans[i]=true;
            else 
                ans[i]=false;
        }
        return ans;
        
    }
};