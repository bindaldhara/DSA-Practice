class Solution {
public:
     bool topoSort(int src , vector<int> adj[] , vector<bool>&visited , stack<int>&st , vector<bool>&instack){
        visited[src] = true;
        instack[src] = true;
        for(auto x : adj[src]){
            if(visited[x] == false){
                if(topoSort(x , adj , visited , st , instack)==true)return true;
            }else if(instack[x]==true) return true;
        }
        instack[src] = false;
        st.push(src);
        return false;
    }
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& edges) {
         int index = m;
         for(int i = 0 ; i < group.size() ; i++){
             if(group[i] == -1)group[i] = m++;
         }
         vector<int> newGrps[m];
         for(int i = 0 ; i < n ; i++){
             newGrps[group[i]].push_back(i);
         }
         vector<int> adj[m];
         vector<int> adj2[n];
         for(int i = 0 ; i < n ; i++){
              int u = group[i];
              for(auto num : edges[i]){
                   int v = group[num];
                   if(u == v){
                       adj2[num].push_back(i);
                       continue;
                   }
                   adj[v].push_back(u);
              }
         }
         stack<int> st;
         vector<bool> visited(m , false);
         vector<bool> instack(m , false);
         for(int i = 0 ; i < m ; i++){
             if(visited[i] == false){
                 if(topoSort(i , adj , visited , st , instack)==true) return {};
             }
         }
         for(int i = 0 ; i < m ; i++){
             vector<bool> visited(n , false);
             vector<bool> instack(n , false);
             stack<int> st;
             for(int num : newGrps[i]){
                 if(visited[num] == false)
                    if(topoSort(num , adj2 , visited , st , instack)==true) return {};
             }
             int index = 0;
             while(st.size()){
                 newGrps[i][index] = st.top();
                 st.pop();
                 index++;
             }
         }
         vector<int> result;
         while(st.size()){
             int num = st.top();
             st.pop();
             for(auto x : newGrps[num])result.push_back(x);
         }
         return result;
        
    }
};