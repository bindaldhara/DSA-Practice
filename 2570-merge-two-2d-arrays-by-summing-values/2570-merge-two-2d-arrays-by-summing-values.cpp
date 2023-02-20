class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> mp;
        vector<vector<int>> res;
        for(auto it : nums1){
            mp[it[0]]+=it[1];
        }
        for(auto it : nums2){
            mp[it[0]]+=it[1];
        }
        for(auto it : mp){
            res.push_back({it.first, it.second});
        }
        sort(res.begin(),res.end());
        return res;
    }
};