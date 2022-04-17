class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans;
        int dis = INT_MAX;
        
        for(int i = 0; i<nums.size(); i++){
            int currdis = abs(0-nums[i]);
            if(currdis<dis){
                ans = nums[i];
                dis = currdis;
            }
            
            else if(currdis == dis){
                ans = max(ans, nums[i]);
            }
        }
        
        return ans;
    }
};