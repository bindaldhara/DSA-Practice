class Solution {
public:
     int helper(int n,vector<int>& dp) {
        if(n<=0) 
            return n;
        if(dp[n]!=-1) 
            return dp[n];
        return dp[n] =helper(n-1, dp)+helper(n-2, dp)+helper(n-3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+3, -1);
        dp[0]=0,dp[1] = 1, dp[2] = 1;
        return helper(n, dp);
        
    }
};