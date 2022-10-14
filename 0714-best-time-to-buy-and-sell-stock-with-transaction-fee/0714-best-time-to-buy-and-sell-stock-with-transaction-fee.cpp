class Solution {
public:
    int recursion(vector<int>&prices,int fee,int i,int buy,vector<vector<int>>&dp){
        if(i==prices.size())
            return 0;

        if(dp[i][buy]!=-1)
            return dp[i][buy];

        int maxi=0,profit=0;
        if(buy==0)
            profit=max(-prices[i]+recursion(prices,fee,i+1,1,dp),recursion(prices,fee,i+1,0,dp));
        else
            profit=max(prices[i]-fee+recursion(prices,fee,i+1,0,dp),recursion(prices,fee,i+1,1,dp));
        maxi=max(maxi,profit);
        return dp[i][buy]=maxi;
    }

    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return recursion(prices,fee,0,0,dp);
        
    }
};