class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int curr = 1;
        for (int i=0; i<n; i++) {
            if (nums[i] > curr) 
                return curr;
            else if (nums[i] == curr) {
                curr *= 2;
            }
        }
        return curr;
    }
};