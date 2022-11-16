class Solution {
public:
        int leftBinary(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int fst =-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            
            if(nums[mid] == target){
                fst = mid;
                r = mid-1;
            }
            else if(nums[mid] > target)
                r = mid-1;
            else
                l = mid+1;
        }
        
        return fst;
    }
    
    int rightBinary(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int lst = -1;
        
        while(l<=r){
            int mid = (l+r)/2;
            
            if(nums[mid] == target){
                lst = mid;
                l = mid+1;
            }
            else if(nums[mid] > target)
                r = mid-1;
            else
                l = mid+1;
        }
        
        return lst;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = leftBinary(nums, target);
        int last = rightBinary(nums, target);
        
        return {first, last};
    }
};