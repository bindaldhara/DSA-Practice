class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int d=0;
        for(int n:nums) 
            if(d<2 || n>nums[d-2]) 
                nums[d++]=n;
        return d;
    }
};