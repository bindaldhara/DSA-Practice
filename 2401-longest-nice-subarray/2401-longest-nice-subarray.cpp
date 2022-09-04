class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
      int m=0, l=0, res=0;
        for(int i=0;i<nums.size();i++) {
            while((m & nums[i]))
                m^=nums[l++];
            m|=nums[i];
            res=max(res,i-l+1);
        }
        return res;        
    }
};