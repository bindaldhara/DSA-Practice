class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> res(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i];
        }
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i];
        }
        res[0] = suffix[1];
        res[n - 1] = prefix[n - 2];
        
        for (int i = 1; i < n - 1; i++) {
        res[i] = prefix[i - 1] * suffix[i + 1];
        }
        return res;
    }
};