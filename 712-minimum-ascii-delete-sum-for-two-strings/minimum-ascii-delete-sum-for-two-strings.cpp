class Solution {
public:
    int helper(int i, int j, int m , int n , string &s1, string &s2, vector<vector<int>>&dp){
        if(i>=m && j>=n) return 0;
        if(dp[i][j] !=-1) return dp[i][j];
        if(i>= m) 
            return dp[i][j] = s2[j] + helper(i,j+1,m,n,s1,s2,dp);
        else if(j>=n) 
            return dp[i][j]= s1[i] + helper(i+1, j , m,n,s1,s2,dp);
        if(s1[i] == s2[j]) 
            return dp[i][j]= helper(i+1, j+1, m,n,s1,s2,dp);
        int delete1 = s1[i] + helper(i+1,j,m,n,s1,s2,dp);
        int delete2 = s2[j] + helper(i,j+1,m,n,s1,s2,dp);
        dp[i][j]=  min(delete1, delete2);
        return dp[i][j];
    }
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        vector<vector<int>>dp(m+1, vector<int>(n+1,-1));
        return helper(0,0,m,n,s1,s2,dp);
    }
};