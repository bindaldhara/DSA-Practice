class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n=nums.size(),poz=0,nr=1;
        for(int i=1;i<n;i++)
            if(nums[i]!=nums[nr-1]){
				nr++; 
                nums[nr-1]=nums[i];
            }
        return nr;
    }
};