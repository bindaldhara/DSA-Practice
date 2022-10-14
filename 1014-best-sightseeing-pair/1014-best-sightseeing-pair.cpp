class Solution {
public:
    int f(vector<int> &values,int ind,int flag,vector<vector<int>> &dp){
        
        if(ind==values.size()){
            return dp[ind][flag] = 0;
        }
        
        if(flag>1){
            return dp[ind][flag] = 0;
        }
        
        if(dp[ind][flag]!=-1){
            return dp[ind][flag];
        }
        
        int pick = -1e9;
        int notPick = -1e9;
        
        if(flag==0){
            if(ind!=values.size()-1){
                pick = values[ind] + ind + f(values,ind+1,flag+1,dp);
            }
            notPick = 0 + f(values,ind+1,flag,dp);
        }
        
        else if(flag==1){
            pick = values[ind] - ind + f(values,ind+1,flag+1,dp);
            if(ind!=values.size()-1){
                notPick = 0 + f(values,ind+1,flag,dp);
            }
        }
        
        return dp[ind][flag] = max(pick,notPick);
    }
    
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<vector<int>> dp(values.size()+1,vector<int>(3,-1));
        return f(values,0,0,dp);
        
    }
};