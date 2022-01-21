class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int require = 0,extra = 0;
        for(int i=0;i<gas.size();i++){
            extra += gas[i] - cost[i];
            if(extra < 0){
                require += extra;
                extra = 0;
                start = i + 1;
            }
        }
        if(extra + require >= 0) return start;
        return -1;
        
    }
};