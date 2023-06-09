class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        if(nums[0]==1 && nums[nums.size()-1]==nums.size()) 
            return 0;

        int first = find(nums.begin(), nums.end(), 1)-nums.begin();
        int last = find(nums.begin(), nums.end(), nums.size())-nums.begin();

        if(first>last) 
            return first+ (nums.size()-last) -2;
        return first+ (nums.size()-last) -1;
    }
};