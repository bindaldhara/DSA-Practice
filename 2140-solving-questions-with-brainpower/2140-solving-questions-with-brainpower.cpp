class Solution {
public:
   long long helper(vector<vector<int>>& questions,vector<long long>&dp,int i,long long n){
        if(i>=n) 
            return 0;
        if(dp[i]!=-1) 
            return dp[i];
        long long res=0;
        res=max(questions[i][0]+helper(questions,dp,i+questions[i][1]+1,n),helper(questions,dp,i+1,n));
            return dp[i]=res;
    }
    long long mostPoints(vector<vector<int>>& questions) {
        long long n=questions.size();
        vector<long long> dp(n,-1);
         return helper(questions,dp,0,n);
    }
};