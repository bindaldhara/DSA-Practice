class Solution {
public:
    bool helper(int i,int j,string& s,vector<string>& wordDict,vector<vector<int>>&dp){
        if(j == s.size()) return true; 
        if(i == wordDict.size()) return false;
        if(dp[i][j] != -1) return dp[i][j];
        
        string temp = wordDict[i];
        bool take =0;
        if(s.substr(j, temp.size()) == temp){
            take = helper(0, j+temp.size(),s,wordDict,dp);
        }
        bool notTake = helper(i+1,j,s,wordDict,dp);
        bool ans = take || notTake;
        return dp[i][j] = ans;  
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<vector<int>> dp(wordDict.size(),vector<int>(s.size(),-1));
        return helper(0,0,s,wordDict,dp);
    }
};