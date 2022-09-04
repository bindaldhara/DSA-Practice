class Solution {
public:
    int solve(int n,int dp[]){
        if(dp[n]!=-1)
            return dp[n];
        else
            return dp[n]=solve(n-2,dp)+solve(n-1,dp);
    }
    int climbStairs(int n) {
     int dp[n+1];
        for(int i=0;i<=n;i++)
            dp[i]=-1;
        dp[0]=0;
        dp[1]=1;
        if(n>1)
            dp[2]=2;
        return solve(n,dp);
    }
};


