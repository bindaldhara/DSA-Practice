class Solution {
public:
    int helper(string &s1, string &s2, int i , int j, vector<vector<int>>&dp){
        int take = 0;
        if(i< 0) return 0;
        if(j< 0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i] == s2[j]){
            take = 1+helper(s1,s2,i-1,j-1,dp);
        }
        int temp = helper(s1,s2,i-1,j,dp);
        int temp2 = helper(s1,s2,i,j-1,dp);
        
        dp[i][j] = max({take, temp, temp2});
        return dp[i][j];
        
    }
    int longestCommonSubsequence(string s1, string s2) {
        vector<vector<int>>dp(s1.length()+1, vector<int>(s2.length()+1,-1));
        return helper(s1,s2,s1.length()-1, s2.length()-1, dp);
    }
};

