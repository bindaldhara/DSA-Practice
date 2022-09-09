class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int tsum = 0;
        for(auto i :nums)
            tsum += i;
        int lsum = 0;
        for(int i =0;i< nums.size();i++){
            if(lsum == tsum -lsum -nums[i])
                return i;
            lsum +=nums[i];
        }
        return -1;   
    }
};