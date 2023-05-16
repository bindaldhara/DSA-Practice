class Solution {
public:
    void dfs(vector<vector<int>>& mat ,int i,int j,int m,int n,int &c){
       if(i>=m || j>=n || i<0 || j<0 || mat[i][j]==-1 || mat[i][j]==0)
       return ;
       c+=mat[i][j];
       mat[i][j]=-1;

       dfs(mat,i+1,j,m,n,c);
       dfs(mat,i-1,j,m,n,c);
       dfs(mat,i,j+1,m,n,c);
       dfs(mat,i,j-1,m,n,c);   
        
    }
    int findMaxFish(vector<vector<int>>& mat){
         int c=0;
        int m=mat.size();
        int n=mat[0].size();
        int maxi=0;
        for(auto i=0;i<m;i++){
            for(auto j=0;j<n;j++){
                if(mat[i][j]>0){
                    c=0;
                       dfs(mat,i,j,m,n,c);
                    maxi=max(c,maxi);
                }
            }
        }   
        return maxi;   
    }
};  
    
    
    
    
    