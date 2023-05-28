class Solution {
public:
   int Sol(int n,int m, vector<int> &cuts,int x,int y,vector<vector<int>>&dp){
        if(x>y){
            return 0;
        }
        if(dp[x][y]!=-1) 
            return dp[x][y];
        int ans=INT_MAX;
        for(int i=x;i<=y;i++){
            ans=min(ans,m-n+Sol(n,cuts[i],cuts,x,i-1,dp)+Sol(cuts[i],m,cuts,i+1,y,dp));
        }
        return dp[x][y]=ans;
    }
    
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(cuts.size()+1,vector<int>(cuts.size()+1,-1));
        return Sol(0,n,cuts,0,cuts.size()-1,dp);
    }
};