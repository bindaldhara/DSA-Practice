class Solution {
public:
    int search(vector<int>& nums, int target) {
        int strt=0,end=nums.size()-1;
         while(strt<=end){
         int mid=(strt+end)/2;
       if(nums[mid]==target) {
      return mid;
       }

      else if(nums[mid]>=nums[strt]){
            if(target>=nums[strt] && target<=nums[mid])
                end=mid-1;
            
            else
                strt=mid+1;
            
        }
        else{
            if(target<=nums[end] && target>= nums[mid])
                strt=mid+1;
            
            else
                end=mid-1;
            
        }
    }
    return -1;
    }
};