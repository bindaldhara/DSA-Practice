class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        if(k==n*m || k==0)
            return grid;
        int l,temp;
        while(k--){
            l=grid[n-1][m-1];
            for(int i=0;i<n;i++){
            temp=grid[i][m-1];
            for(int j=m-1;j>0;j--)
                grid[i][j]=grid[i][j-1];
                
                grid[i][0]=l;
                l=temp;
        } 
           
        }
        return grid;
    }
};