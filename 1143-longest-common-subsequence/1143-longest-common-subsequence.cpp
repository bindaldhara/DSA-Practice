class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
     int s1 = text1.size(),s2 = text2.size();
        vector<vector<int>> dp(s1+1, vector<int> (s2+1,0));
        for(int i =1;i<=s1;i++){
            for(int j=1;j<=s2;j++){
                if(text1[i-1] == text2[j-1]) 
                    dp[i][j] = (1 + dp[i-1][j-1]);
                else 
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[s1][s2];   
    }
};

