class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string B = string(s.rbegin(), s.rend());

        int m = s.size(), n = B.size();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == B[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];
        
    }
};