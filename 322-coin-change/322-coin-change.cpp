class Solution {
public:
    int helper(int i,int amount,vector<vector<int>>&dp,vector<int>&coins){
        if(i==0){
        if(amount%coins[i]==0)
            return amount/coins[i];
        else
                return 1e9;
        }
        if(amount==0)
            return 0;
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        int r=helper(i-1,amount,dp,coins);
        int res=1e9;
        if(coins[i]<=amount)
             res=1+helper(i,amount-coins[i],dp,coins);
            return dp[i][amount]=min(r,res);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans= helper(n-1,amount,dp,coins);
        if(ans==1e9)
            return -1;
        return ans;
    }
};

