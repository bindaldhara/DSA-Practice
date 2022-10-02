class Solution {
public:
    long long MOD = 1e9+7;
    long long helper(int n, int k, int target, vector<vector<int>> &dp){
        if(target < 0)
            return 0;
        if(n == 0 and target != 0)
            return 0;
        if(target == 0 and n != 0)
            return 0;
        if(target == 0 and n == 0)
            return 1;
        if(dp[n][target] != -1)
            return dp[n][target];
        long long res = 0;
        for(int i=1; i<=k; i++)
            res += helper(n-1, k, target-i, dp);
        return dp[n][target] = res%MOD;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return helper(n, k, target, dp);
        
    }
};