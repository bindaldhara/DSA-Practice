class Solution {
public:
   vector<vector<int>> res;
    void helper(int i, vector<int> subset, vector<int>& nums){
        if(i >= nums.size()) {
            res.push_back(subset);
            return;
        }
        helper(i+1, subset, nums);
        subset.push_back(nums[i]);
        helper(i+1, subset, nums);

    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        helper(0, subset, nums);
        return res;
        
    }
};

