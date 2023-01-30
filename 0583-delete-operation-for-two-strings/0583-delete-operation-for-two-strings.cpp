class Solution {
public:
     int solve(int i,int j,string &text1,string &text2,vector<vector<int>> &dp){
      if(i<0 || j<0) 
          return 0;
      if(dp[i][j]!=-1) 
          return dp[i][j];
      if(text1[i]==text2[j]) 
          return dp[i][j]=1+solve(i-1,j-1,text1,text2,dp);
      return dp[i][j]=max(solve(i-1,j,text1,text2,dp),solve(i,j-1,text1,text2,dp));
    }
    int minDistance(string word1, string word2) {// n+m-2LCS
        int n=word1.length();
        int m=word2.length();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return (n+m)-2*(solve(n-1,m-1,word1,word2,dp)); 
    }
};