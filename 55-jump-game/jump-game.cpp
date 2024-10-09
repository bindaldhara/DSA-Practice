class Solution {
public:
    bool canJump(vector<int>& nums) {
       int ans = 0;
        
        for(int i=0;i<nums.size();i++){
            if(ans<i) return false;
            ans = max(ans , i + nums[i]);
        }
        return true;
    }
};