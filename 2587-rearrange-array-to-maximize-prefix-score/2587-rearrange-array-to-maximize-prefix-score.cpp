class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n = nums.size(), res = 0;
        long long p = 0;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++) {
            p += nums[i];
            if(p > 0) 
                res++;
        }
        
        return res;
    }
};