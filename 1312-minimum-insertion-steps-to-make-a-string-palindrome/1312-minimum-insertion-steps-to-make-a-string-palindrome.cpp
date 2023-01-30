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

    int minInsertions(string s) { // n-LCS
        string t=s;
        int n=s.length();
        reverse(t.begin(),t.end());
        if(n<=1 || s==t) 
            return 0;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return n-solve(n-1,n-1,s,t,dp); 
        
        
    }
};