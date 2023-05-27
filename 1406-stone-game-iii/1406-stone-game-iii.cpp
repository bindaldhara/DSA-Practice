class Solution {
public:
    int dp[50001];
    int solve(int idx,vector<int>& arr){
        if(idx>=arr.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int ans=INT_MIN;
        int val=0;
        for(int i=0;i<3;i++){
            if(idx+i<arr.size()){
                val+=arr[idx+i];
                ans=max(ans,val-solve(idx+i+1,arr));
            }
        }
        return dp[idx]=ans;
    }
    
    string stoneGameIII(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
        int alice=solve(0,arr);
        if(alice>0){
            return "Alice";
        }else if(alice==0){
            return "Tie";
        }
        return "Bob";
        
    }
};