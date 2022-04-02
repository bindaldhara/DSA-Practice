class Solution {
public:
  int recursive(vector<int>&nums){
        if(nums.size() == 1)
            return nums[0];
        int n = nums.size();
        vector<int>newNums(n-1);
        for(int i = 0;i<n-1;i++)
            newNums[i] = (nums[i] + nums[i+1])%10;
        return recursive(newNums);
        
    }
    int triangularSum(vector<int>& nums) {
       return recursive(nums);
    }
};


