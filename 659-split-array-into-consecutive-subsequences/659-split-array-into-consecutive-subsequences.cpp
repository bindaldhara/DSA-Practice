class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int>mp1,mp2;
    for(int n:nums)
        mp1[n]++;
    for(int n:nums){
        if(mp1[n]==0) 
            continue;
        mp1[n]--;
        if(mp2[n-1]>0){
            mp2[n-1]--;
            mp2[n]++;
        }
        else if(mp1[n+1] &&mp1[n+2]){
            mp1[n+1]--;
            mp1[n+2]--;
            mp2[n+2]++;
        }
        else
            return false;
    }
    return true;
    }
};

