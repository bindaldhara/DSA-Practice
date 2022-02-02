class Solution {
public:

    bool dfs(vector<vector<int>>& adj,int src,int color,vector<int>& col){
        for(auto x:adj[src]){
            if(col[x]==-1){
                col[x]=!color;
                if(dfs(adj,x,!color,col)==false)
                    return false;
            }
            else if(color==col[x])
                return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& adj) {
        int i,j,n=adj.size(),src=0,color=0;
        vector<int> col(n+1,-1);
        for(i=0;i<n;i++){
            if(col[i]==-1){
            if(!dfs(adj,i,color,col))
                return false;
            }
        }
        return true;
        
    }
};

