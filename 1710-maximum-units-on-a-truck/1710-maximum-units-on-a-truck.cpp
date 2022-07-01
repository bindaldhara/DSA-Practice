class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    int res=0;
        sort(boxTypes.begin(),boxTypes.end(),comp);
        for(auto i:boxTypes){
            int tot=min(truckSize,i[0]);
            res+=(i[1]*tot);
            truckSize-=tot;
        }
        return res;
    }
};