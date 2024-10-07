class Solution {
public:
   void helper(int i, vector<int> subset, vector<int>& nums,vector<vector<int>> &res){
        if(i >= nums.size()) {
            res.push_back(subset);  
            return;
        }
       
        helper(i+1, subset, nums,res);
        subset.push_back(nums[i]);
        helper(i+1, subset, nums,res);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(0, subset, nums,res);
        return res;
    }
};