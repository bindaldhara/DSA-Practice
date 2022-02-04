class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;
        int sum = 0;
        m.insert({0, -1});
        int ans = 0;
        int len;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                sum--;
            else
                sum++;
            if (m.find(sum) != m.end())
            {
                len = i - m[sum];
                ans = max(ans, len);
            }
            else
                m[sum] = i;
        }
        return ans;
    }
};