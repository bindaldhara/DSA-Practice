class Solution {
public:
    vector<vector<long long>> dp;
    int mod=1e9+7;
int fun(int n,int r){   
    if(r==0||r==n)
        return 1;
    if(r==1||r==n-1)
        return n;
    
    if(dp[n][r]!=-1)
        return dp[n][r];
    
    return dp[n][r]=(fun(n-1,r)%mod+fun(n-1,r-1)%mod)%mod;
}

unsigned long long solve(vector<int>&nums){
    if(nums.size()<=1) 
        return 1;
    vector<int> l,r;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[0]) 
            r.push_back(nums[i]);
        else l.push_back(nums[i]);
    }
    int n=l.size(),m=r.size();
    return (solve(l)*solve(r)%mod*fun(n+m,n))%mod;
}

public:
    int numOfWays(vector<int>& nums) {
        dp.resize(nums.size()+1,vector<long long>(nums.size()+1,-1));
        return solve(nums)-1;
        
    }
};