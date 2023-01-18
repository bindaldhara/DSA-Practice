class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int curr_max,curr_min,max_sum,min_sum,total;
        curr_max = max_sum = curr_min = min_sum = total = nums[0];
        
        for(int i=1;i<n;i++){
            curr_max = max(curr_max + nums[i], nums[i]);
            max_sum = max(max_sum, curr_max);  
            curr_min = min(curr_min + nums[i], nums[i]);
            min_sum = min(min_sum, curr_min);  
            total += nums[i];
        }
        if(max_sum >0)                      
            return max(max_sum, total - min_sum);
        return max_sum;              
    }
};


