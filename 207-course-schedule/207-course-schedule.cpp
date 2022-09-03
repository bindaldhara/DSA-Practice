class Solution {
public:
    bool dfs(vector<vector<int>> &adj,vector<bool> &visited,vector<bool> &dfsVisited,int book){
        
        dfsVisited[book]=1;
        visited[book]=1;
       
        for(auto books:adj[book]){
            if(!visited[books]){
                if(dfs(adj,visited,dfsVisited,books)) 
                    return true;
                
            }
            else if(dfsVisited[books]){
                return true;
            }
        }
        dfsVisited[book]=0;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<bool> visited(numCourses,0);
        vector<bool> dfsVisited(numCourses,0);
        
        for(auto book: prerequisites)
            adj[book[1]].push_back(book[0]);
        
        for(int book=0;book<numCourses;book++){
            if(!visited[book]){
                if(dfs(adj,visited,dfsVisited,book)){
                   return false;
                }
            }
        }
        
        return true;
        
    }
};