class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=-1;
        if(nums.size()<3){
            ans=-1;
        }
        else{
            ans=nums[1];
        }
        return ans;
    }
};