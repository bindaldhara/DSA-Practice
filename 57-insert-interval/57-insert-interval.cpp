class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool flag = false;
        vector<vector<int>> res;
        int start = newInterval[0];
        int end = newInterval[1];
        for(auto interval: intervals){
            int interval_start = interval[0];
            int interval_end = interval[1];
            if(start >= interval_start && start <= interval_end || end >= interval_start && end <= interval_end ||
              start < interval_start && end > interval_end) {           
                start = min(start, interval_start);
                end = max(end, interval_end);
                if(flag){
                    res.pop_back();
                }
                res.push_back({start, end});
                flag = true;
            } else {
                if(!flag && start<interval_start){        
                    res.push_back(newInterval);
                    flag = true;
                }
                res.push_back(interval);
            }
        }
        if(!flag) {                                 
            res.push_back(newInterval);
        }
        return res;
    }
};