class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            mp[sum]=i;
        }
        vector<int> ans(queries.size(),nums.size());
        for (int i=0;i<queries.size();i++) {
            for (auto x:mp) {
                if (x.first>queries[i]) {
                    ans[i]=x.second;
                    break;
                }
            }
        }
        return ans;
    }
};