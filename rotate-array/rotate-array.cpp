class Solution {
public:
    void reverse_range(vector<int>& nums, int i, int j) {
        while (i < j)
            swap(nums[i++], nums[j--]);
    }
    
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if (nums.size() <= 1) return;
        
        reverse_range(nums, 0, nums.size()-1);
        reverse_range(nums, k, nums.size()-1);
        reverse_range(nums, 0, k-1);
    }
};

