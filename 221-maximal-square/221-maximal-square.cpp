class Solution {
public:
  int helper(vector<vector<char>>& matrix,int i,int j,vector<vector<int>>&dp){
        if(i>=matrix.size()||j>=matrix[0].size())
            return 0;
        if(matrix[i][j]=='0')
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
         return  dp[i][j]= 1+min({helper(matrix,i+1,j,dp),helper(matrix,i,j+1,dp),helper(matrix,i+1,j+1,dp)});   
    }
       int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n =matrix[0].size();
        int res=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1')
                   res=max(res,helper(matrix,i,j,dp));
            }
        }
     return res*res;   
    }
};

