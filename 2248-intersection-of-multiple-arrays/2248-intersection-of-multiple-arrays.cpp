class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
        for(int j=0;j<nums[i].size();j++)
            mp[nums[i][j]]++;
        
    vector<int>res;
    int n=nums.size();
    for(auto it:mp)
        if(it.second==n)
            res.push_back(it.first);
			
    sort(res.begin(),res.end());
    return res;
    }
};