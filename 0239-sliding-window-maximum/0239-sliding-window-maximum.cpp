class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
    int n = nums.size();
    if (n < k)
        return ans;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k; i++)
        pq.push(make_pair(nums[i], i));
    ans.push_back(pq.top().first);
    for (int i = k; i < n; i++){
        pq.push(make_pair(nums[i], i));
        while (!pq.empty() && pq.top().second <= (i - k))
            pq.pop();
        ans.push_back(pq.top().first);
    }
    return ans;
    }
};