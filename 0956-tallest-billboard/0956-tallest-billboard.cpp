class Solution {
public:
    int dp[21][2*5000+5];
    int dfs(int curr,int a,vector<int>& rods){
        if(dp[curr][a+5000]!=-1) return dp[curr][a+5000];
        if(curr==rods.size()){
            if(a==0){
                return 0;
            }
            return INT_MIN;
        }
        int take1=rods[curr]+dfs(curr+1,a+rods[curr],rods);
        int take2=dfs(curr+1,a-rods[curr],rods);
        int not_take=dfs(curr+1,a,rods);

        return dp[curr][a+5000]=max(not_take,max(take1,take2));

    }
    int tallestBillboard(vector<int>& rods) {
        memset(dp,-1,sizeof(dp));
        return dfs(0,0,rods);
        
    }
};