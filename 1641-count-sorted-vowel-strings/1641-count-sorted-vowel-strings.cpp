class Solution {
public:
    int countVowelStrings(int n) {
       vector<vector<int>> dp(n+1,vector<int>(5));
        for(int i=0;i<dp.size();i++)
            dp[i][0]=1;
        
        
        for(int j=0;j<dp[0].size();j++)
            dp[0][j]=1;
        
        for(int i=1;i<dp.size();i++)
        {
            for(int j=1;j<dp[i].size();j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]; // for evert i,j just add its top and left neighbor
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
        
        
    }
};