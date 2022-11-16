class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start =0;
        int end = nums.size()-1;
        int mid =0;
        while(start < end){
            mid = (start + end)/2;    
            if(nums[mid] > nums[mid+1]) 
                end = mid;
            else if(nums[mid] < nums[mid+1]) 
                start = mid+1;    
            }
            return start;
    }
};