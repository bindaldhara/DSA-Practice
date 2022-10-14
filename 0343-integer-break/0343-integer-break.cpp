class Solution {
public:
    int helper(int n,int sum,int ind,vector<vector<int>> &dp){
        if(sum>n || ind>=n)
            return -1e9;
        if(sum==n)
            return 1;
        if(dp[sum][ind]!=-1)
            return dp[sum][ind];
        
        int nottake = 1*helper(n,sum,ind+1,dp);
        int take = 1;
        if(sum+ind<=n)
            take = ind*helper(n,sum+ind,ind,dp);
        return dp[sum][ind] = max(take,nottake);
    }
    
    int integerBreak(int n) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return helper(n,0,1,dp);
        
    }
};