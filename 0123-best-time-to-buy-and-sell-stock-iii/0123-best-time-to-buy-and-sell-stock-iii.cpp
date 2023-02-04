class Solution {
public:
    int solve(vector<int>&prices,int n,int i,int buy,int cap,vector<vector<vector<int>>>&dp){
        if(cap == 0 || i == n)
            return 0;
        if(dp[i][buy][cap] != -1)
            return dp[i][buy][cap];

        int profit=0;
        if(buy){
            profit = max(solve(prices, n, i+1, buy, cap, dp), -prices[i] + solve(prices, n, i+1, 0, cap, dp));
        }
        else{
            profit = max(solve(prices, n, i+1, buy, cap, dp), prices[i] + solve(prices, n, i+1, 1, cap-1, dp));
        }
        return dp[i][buy][cap] = profit;
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int> (3, -1)));
        return solve(prices, n, 0, 1, 2, dp);
    }
};









