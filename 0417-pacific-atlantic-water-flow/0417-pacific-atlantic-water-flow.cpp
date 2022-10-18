class Solution {
public:
    void dfs(int i,int j,int row,int col,vector<vector<int>>& heights,vector<vector<bool>>&visited){
        if(i<0 || i>=row || j<0 || j>=col || visited[i][j]) return;
        visited[i][j]=true;
        
        if(i+1>=0 and i+1<row and heights[i][j]<=heights[i+1][j])
        dfs(i+1,j,row,col,heights,visited);
        
        if(i-1>=0 and i-1<row and heights[i][j]<=heights[i-1][j])
        dfs(i-1,j,row,col,heights,visited);
        
        if(j+1>=0 and j+1<col and heights[i][j]<=heights[i][j+1])
        dfs(i,j+1,row,col,heights,visited);
        
        if(j-1>=0 and j-1<col and heights[i][j]<=heights[i][j-1])
        dfs(i,j-1,row,col,heights,visited);
        
        return;
 }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    int row=heights.size();
    int col=heights[0].size();
        
    vector<vector<bool>>atlantic(row,vector<bool>(col,false));
    vector<vector<bool>>pacific(row,vector<bool>(col,false));
        
    vector<vector<int>>res;
        
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(!pacific[i][j] and (i==0 || j==0))
            dfs(i,j,row,col,heights,pacific);
        }
    }
        
  
        
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(!atlantic[i][j] and (i==row-1 || j==col-1 ))
            dfs(i,j,row,col,heights,atlantic);
        }
    }
        
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(pacific[i][j] and atlantic[i][j]){
                vector<int>temp;
                temp.push_back(i);
                temp.push_back(j);
                res.push_back(temp);
            }
        }
    }
    return res;
        
    }
};