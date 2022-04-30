class Solution {
public:
   bool dfs(map<string,vector<pair<string,double>>> &adj, string ind,string dest,double &distance,map<string,bool> &visited){
        if(ind == dest && adj.find(dest)!=adj.end())
            return true;    
        visited[ind]=true; 
        for(auto x : adj[ind]){
            if(!visited[x.first]){
                 distance*=x.second; 
                 if(dfs(adj,x.first,dest,distance,visited))
                    return true;
                distance/=x.second;  
            }  
        }
        return false;    
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        map<string,vector<pair<string,double>>> adj;
        for(int i=0;i<equations.size();i++){
            adj[equations[i][0]].push_back( { equations[i][1],values[i]});
            adj[equations[i][1]].push_back( {equations[i][0],1/values[i]});
        }
        vector<double> ans(queries.size(),-1);
        for(int i=0;i<queries.size();i++){
            double d=1;
            map<string,bool> visited;
            if(dfs(adj,queries[i][0],queries[i][1],d,visited))
                ans[i]=d; 
        }
        
        return ans;   
    }
};