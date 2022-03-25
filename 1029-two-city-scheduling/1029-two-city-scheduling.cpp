class Solution {
public:
          static bool compare(vector<int> &a, vector<int> &b) {
                 return a[1] - a[0] > b[1] - b[0];
          }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sz = costs.size();
        sort(costs.begin(), costs.end(), compare);
        int res = 0;
        for (int i = 0; i < sz; i++)
            res += (i >= sz / 2) ? costs[i][1] : costs[i][0];

        return res;
    }
};