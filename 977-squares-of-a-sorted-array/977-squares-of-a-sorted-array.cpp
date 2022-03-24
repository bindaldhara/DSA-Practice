class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sz = nums.size();
        vector<int> res(sz);
        int l=0, r=sz-1;
        for(int i=sz-1;i>=0;i--) {
            if(abs(nums[l]) >= abs(nums[r])) {
                res[i] = (nums[l] * nums[l]);
                l++;
            } else {
                res[i] = (nums[r] * nums[r]);
                r--;
            }
        }
        return res;
        
    }
};

