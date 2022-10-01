class Solution {
public:
   int solve(int i,bool canBuyNow,vector<int>& prices,vector<vector<int>>& dp){
        if(i>=prices.size()) return 0;
        if(dp[i][canBuyNow]!=-1) return dp[i][canBuyNow];
        
        int maxprofit = 0;
        if(canBuyNow) 
            maxprofit = max(solve(i+1,false,prices,dp)-prices[i], solve(i+1,true,prices,dp));
        else
            maxprofit = max(prices[i]+solve(i+2,true,prices,dp), solve(i+1,false,prices,dp));
        return dp[i][canBuyNow] = maxprofit;
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return solve(0,true,prices,dp);
    }
};














