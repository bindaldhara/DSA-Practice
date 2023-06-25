class Solution {
public:
    int mod = 1000000007;
    int first,last,n;
    
    int solve(int current,int fuel,vector<int>& locations,vector<vector<int>>& dp){
       int routes=0;
       if(fuel>=0 && current==last) 
           routes++;
       else if(fuel<0) 
           return 0;
       if(dp[current][fuel]!= -1) 
           return dp[current][fuel];
       for(int next=0;next<n;next++){
         if(next==current) continue;
         int used = abs(locations[next]-locations[current]);
         routes = (routes+solve(next,fuel-used,locations,dp))%mod;
       }
      return dp[current][fuel] = routes%mod;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        first = start;
        last = finish;
        n=locations.size();
        vector<vector<int>> dp(n,vector<int>(fuel+1,-1));
        return solve(first,fuel,locations,dp);
    }
};