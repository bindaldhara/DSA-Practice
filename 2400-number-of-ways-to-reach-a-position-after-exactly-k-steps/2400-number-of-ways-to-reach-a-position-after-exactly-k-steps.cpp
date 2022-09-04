class Solution {
public:
   int mod = 1e9+7;
    int helper(int startPos, int endPos, int k, vector<vector<int>>& dp){
        if(k == 0 && startPos == endPos)
            return 1;
        if(k == 0 && startPos != endPos)
            return 0;
        if(dp[startPos+1000][k] != -1) 
            return dp[startPos+1000][k];
        
        int left = helper(startPos-1, endPos, k-1, dp);
        int right = helper(startPos+1, endPos, k-1, dp);
        
        return dp[startPos+1000][k] = ((left % mod) + (right % mod)) % mod;
    }

    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(startPos+3000, vector<int> (k+1, -1));
        return helper(startPos, endPos,  k, dp);
    }
};