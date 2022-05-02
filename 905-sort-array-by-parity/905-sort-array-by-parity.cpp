class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0;
        int r= nums.size()-1;

    while (l<r){
        if (nums[l]%2 != 1)
            l++;
        else if (nums[r]%2 != 0)
            r--;
        else{
            int temp= nums[r];
            nums[r]= nums[l];
            nums[l]=temp;
        }
    }
    
    return nums;
    }
};