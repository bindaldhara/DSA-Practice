class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0,count=1;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (count > 0) {
                if (nums[i] == nums[res])
                    count++;
                else count--;
            }
            else {
                count = 1; res = i;
            }
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[res]) count++;
        }
        return (count > n / 2)? nums[res]: -1;
    }
};