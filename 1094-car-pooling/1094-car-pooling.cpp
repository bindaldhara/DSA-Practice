class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> travel(1001);
        int maxcnt = 0;
        for(auto t : trips){
            travel[t[1]] += t[0];
            travel[t[2]] -= t[0];
        }
        for(int i = 0; i <= 1000; i++){
            maxcnt += travel[i];
            if(maxcnt > capacity)
                return false;
        }
        return true;
    }
};

