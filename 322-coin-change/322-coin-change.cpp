class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0; 
        for(int i=1;i<=amount;i++)
        {
            for(auto coin:coins)
            {
                int n=i-coin;
                if(n>=0 && dp[n]!=INT_MAX)
                {
                    dp[i]=min(dp[i],dp[n]+1);
                }
            }
        }
        return dp[amount]!=INT_MAX?dp[amount]:-1;
    }
};


