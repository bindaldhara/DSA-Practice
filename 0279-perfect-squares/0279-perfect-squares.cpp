class Solution {
public:
    int helper(int n,vector<int>&dp){
        if(n==0)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
        
        int ans=INT_MAX;
        int temp;
        for(int i=1;i*i<=n;i++){
            int k=i*i;
            temp=1+helper(n-k,dp);
            ans=min(ans,temp);

        }
        return dp[n]=ans;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    
    }
};