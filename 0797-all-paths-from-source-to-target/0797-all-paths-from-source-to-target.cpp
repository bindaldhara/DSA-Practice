class Solution {
public:
        vector<vector<int>> ans;
        void dfs(int ind,vector<vector<int>> &graph,vector<int> &res){
           if(ind==graph.size()-1)
           ans.push_back(res);
    
    for(int i=0;i<graph[ind].size();i++){
        res.push_back(graph[ind][i]);
        dfs(graph[ind][i],graph,res);
        res.pop_back();
    }   
}
    
       vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
          vector<int> res;
          res.push_back(0);
          dfs(0,graph,res); 
          return ans;
           
    }
};