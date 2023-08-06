#define ll long long
class Solution {
public:
    int mod=1e9+7;
    ll lol(int n, int g, int k, vector<vector<int>> &dp){
        if(n==0 and g==0) return 1;
        if(n==0 or g==0) return 0;
        if(dp[n][g]!=-1) return dp[n][g];
        ll pick=lol(n-1,g-1,k,dp)*n;
        ll notpick=lol(n,g-1,k,dp)*max(n-k,0);
        return dp[n][g]=(pick+notpick)%mod;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<int>> dp(n+1,vector<int>(goal+1,-1));
        return lol(n,goal,k,dp);
    }
    
};