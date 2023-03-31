class Solution {
public:
    int numWays(int i,int j,int n,int m,int k,vector<vector<int>> &sum,vector<vector<vector<int>>> &dp){
        if(sum[i][j] == 0) 
            return 0;
        if(k == 1) 
            return 1;
        if(dp[i][j][k] != -1) 
            return dp[i][j][k];

        int ans = 0;
        for(int v = i+1; v < n; v++) {
            if(sum[i][j] - sum[v][j] > 0) 
                ans = (ans + numWays(v, j, n, m, k-1, sum, dp)) % 1000000007;
        }
        for(int v = j+1; v< m; v++) {
            if(sum[i][j] - sum[i][v] > 0) 
                ans = (ans + numWays(i, v, n, m, k-1, sum, dp)) % 1000000007;
        }

        return dp[i][j][k] = ans;
    }

    int ways(vector<string>& pizza, int k) {
        int n = pizza.size(), m = pizza[0].size();
        vector<vector<int>> sum(n+1, vector<int>(m+1, 0));
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-1; j >= 0; j--) {
                sum[i][j] = sum[i][j+1] + sum[i+1][j] - sum[i+1][j+1] + (pizza[i][j] == 'A' ? 1 : 0);
            }
        }
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(k+1, -1)));
        return numWays(0, 0, n, m, k, sum, dp);
        
    }
};