class Solution {
public:
    int helper(int i,int target,vector<int>&coins,vector<vector<int>>&dp){
        if(target==0) 
            return 1;
        if(i==0) 
            return target%coins[0]==0;
        if(dp[i][target]!=-1) 
            return dp[i][target];
        int take=0;
        if(coins[i]<=target){
            take=helper(i,target-coins[i],coins,dp);
        }
        int nottake=helper(i-1,target,coins,dp);
        return dp[i][target]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return helper(n-1,amount,coins,dp);
        
    }
};