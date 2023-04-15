class Solution {
public:
    int helper(vector<vector<int>>& piles,int index,int k,vector<vector<int>>&dp) {
        if(index==piles.size() || k==0) {
            return dp[index][k]=0;
        }
        if(dp[index][k]!=-1) {
            return dp[index][k];
        }
        if(dp[index+1][k]==-1) {
            dp[index+1][k]=helper(piles,index+1,k,dp);
        }
        int ans=dp[index+1][k];
        for(int i=1;i<=min(k,(int)piles[index].size());i++) {
            if(dp[index+1][k-i]==-1) {
                dp[index+1][k-i]=helper(piles,index+1,k-i,dp);
            }
            ans=max(ans,piles[index][i-1]+dp[index+1][k-i]);
        }
        return dp[index][k]=ans;
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        for(int i=0;i<piles.size();i++) {
            for(int j=0;j<piles[i].size();j++) {
                piles[i][j]=(j>0?piles[i][j-1]+piles[i][j]:piles[i][j]);
            }
        }
        vector<vector<int>>dp(piles.size()+1,vector<int>(k+1,-1));
        return helper(piles,0,k,dp);
        
    }
};