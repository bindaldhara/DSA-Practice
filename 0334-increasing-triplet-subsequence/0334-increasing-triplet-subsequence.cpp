class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> V;
        for(int n: nums){
            if(V.empty() || n > V.back())
                V.push_back(n);
            else{
                int pos = lower_bound(V.begin(), V.end(), n) - V.begin();
                V[pos] = n;   
            }
            if(V.size() == 3)
                return true;
        }
        return false;
    }
};