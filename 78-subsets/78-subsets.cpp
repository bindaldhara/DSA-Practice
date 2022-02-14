class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.empty()) return {{}}; 
        vector<vector<int>> result={{}};
        for(int x:nums)
        {
            int n=result.size();
            for(int i=0;i<n;i++)
            {
               vector<int> r=result[i];
                r.push_back(x);
                result.push_back(r);
            }
        }
        return result;
    }
};