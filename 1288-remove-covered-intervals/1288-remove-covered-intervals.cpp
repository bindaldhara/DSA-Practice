class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
		
		stack<vector<int>> st;
        
        for(auto x: intervals){
            while(!st.empty() && st.top()[0] >= x[0] && st.top()[1] <= x[1]){
                st.pop();
            }
            if(!st.empty() && st.top()[0] <= x[0] && st.top()[1] >= x[1]) 
                continue;
            st.push(x);
        }
        
        return st.size();
    }
};