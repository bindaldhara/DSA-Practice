class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
          int n=nums.size();
        if(n<3) 
            return 0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int res=0;
        for(int i=0;i<n-2;i++){
            if(nums[i+1]+nums[i+2]>nums[i]){
                res=nums[i]+nums[i+1]+nums[i+2];
                break;
            }
        }
        return res;
    }
};