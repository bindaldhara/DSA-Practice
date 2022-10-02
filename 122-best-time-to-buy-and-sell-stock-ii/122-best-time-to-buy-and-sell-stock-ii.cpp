class Solution {
public:
        int helper(vector<int> &prices, int index, int buy, vector<vector<int>> &dp,int n){
        if(index==n)
            return 0;
        int profit=0;
        if(dp[index][buy] != -1)
            return dp[index][buy];
        if(buy==1){
            profit = max(helper(prices, index+1, 0, dp,n)-prices[index],
                         helper(prices, index+1, 1, dp,n));
        }
        else{
            profit = max(prices[index] +helper(prices, index+1, 1, dp,n), 
                         helper(prices, index+1, 0, dp,n));
        }
        return dp[index][buy] = profit;
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2,-1));
        return helper(prices, 0, 1, dp,n);
    }
};