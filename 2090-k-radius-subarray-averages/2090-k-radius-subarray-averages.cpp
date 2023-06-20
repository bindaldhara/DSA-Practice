class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int > ans(n,-1);
        int d=(k<<1)+1;
        if(d>n)
            return ans;
        if(k>nums.size())
            return {-1};
        if(k==0) 
            return nums;
        long long sum=0;
        for(int i=0;i<d;i++){
            sum+=nums[i];
        }
        int t= k;
        ans[t]=sum/d;
        for(int i=d;i<n;i++){
            sum-=nums[i-d];
            sum+=nums[i];
            ans[++t]=sum/d;
        }
        return ans;
    }
};