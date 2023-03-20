class Solution {
public:
    int count = 0;
    unordered_map<int, int> mp;
    
    void dfs(vector<int>& nums, int i, int n, int k){
        if(i == n){
            count++;
            return;
        }
        if(mp[nums[i] - k] == 0){
            mp[nums[i]]++;
            dfs(nums, i + 1, n, k);
            mp[nums[i]]--;
        }
        dfs(nums, i + 1, n, k);
    }

    
    int beautifulSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        dfs(nums, 0, n, k);
        return count - 1;
    }
};
