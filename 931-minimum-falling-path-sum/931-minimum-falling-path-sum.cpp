class Solution {
public:
    long helper(int r,int c,int n,vector<vector<int>>&a,vector<vector<int>>&dp){   
     if(c >= n || c < 0) 
         return INT_MAX;
    if(r == n-1) 
        return a[r][c];
    if(dp[r][c] != -1)
        return dp[r][c];
    
    long  x = a[r][c] + helper(r+1,c,n,a,dp);
    long  y = a[r][c] + helper(r+1,c-1,n,a,dp);
    long  z = a[r][c] + helper(r+1,c+1,n,a,dp);
    
    return dp[r][c] = min(x, min(y,z));
}

int minFallingPathSum(vector<vector<int>>& a) {
    int n = a.size();
    vector<vector<int>> dp(n, vector<int> (n, -1));
    long res = INT_MAX;
    for(int i=0;i<n;i++){
        res = min(res, helper(0,i,n,a,dp));
        dp[0][i] = res;
    }
    return res;
    
    }
};