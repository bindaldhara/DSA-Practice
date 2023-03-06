class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
          int start=intervals[0][0];
          int end=intervals[0][1];
          int count=0;
         bool flag=false;
        for(int i=1;i<intervals.size();i++){
            if(end>intervals[i][0]){
                count++;
                end=min(end,intervals[i][1]);
            }
            else
                end=intervals[i][1];  
        }
        
        return count;
    }
};




