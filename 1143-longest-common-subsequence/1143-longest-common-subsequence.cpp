class Solution {
public: 
    int rec(vector<vector<int>>& dp,string& text1,string& text2,int i,int j){
        if(i==text1.size() || j==text2.size())
            return 0;
        int res1=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(text1[i]==text2[j])
             res1 = 1 + rec(dp,text1,text2,i+1,j+1);
            int res2 = rec(dp,text1,text2,i+1,j);
            int res3 = rec(dp,text1,text2,i,j+1);
            int res4 = rec(dp,text1,text2,i+1,j+1);
            
            dp[i][j]=max(max(res1,res2),max(res3,res4));
        return dp[i][j];
        
    }
     int longestCommonSubsequence(string text1, string text2){
       int n=text1.size(),m=text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return rec(dp,text1,text2,0,0);
    }
};






