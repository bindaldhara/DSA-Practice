class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int frstn=INT_MAX,scndn=INT_MAX;
        for(auto n:nums){
            if(n<= frstn)
                frstn=n;
            else if (n<=scndn)
                scndn=n;
            else return true;
        }
        return false;
    }
};