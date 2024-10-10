class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        if(nums.size() == 0) return {-1,-1};

        int left = 0, right = nums.size() - 1;
        while(left <= right) {
            int mid = (left + right)/2;
            if(nums[mid] < target) left++;
            else if(nums[mid]>target) right--;
            else {
                if(nums[mid] == target) ans[0] = mid;
                right--;
            }
        }
        
        left = 0, right = nums.size() - 1;
        while(left <= right) {
            int mid = (left + right)/2;
            if(nums[mid] > target) right--;
            else  if(nums[mid] < target) left++;
            else {
                if(nums[mid] == target) ans[1] = mid;
                left++;
            }
        }
        return ans;
    }
};