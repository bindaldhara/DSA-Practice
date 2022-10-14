class Solution {
public:
    int longestCommonSubsequence(string word1, string word2) {
         int m = word1.length(),n = word2.length();
    int dp[m+1][n+1];    
    for(int i=0;i<=m;i++)    
        dp[i][0] = 0;
    for(int j=0;j<=n;j++)   
        dp[0][j] = 0;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++){
          if(word1[i-1] == word2[j-1])        
              dp[i][j] = dp[i-1][j-1] + 1;
          else 
              dp[i][j] = max(dp[i-1][j],dp[i][j-1]);  
        }
    return dp[m][n];
    }
    int longestPalindromeSubseq(string s) {
        if(!s.size()) return 0;
        if(s.size()==1) return 1;
        string rev = string(s.rbegin(), s.rend());
        return longestCommonSubsequence(s,rev);
        
    }
};