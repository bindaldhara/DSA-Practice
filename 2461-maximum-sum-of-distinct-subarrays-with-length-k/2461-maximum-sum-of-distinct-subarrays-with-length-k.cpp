class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      unordered_map<int, int> mp;
      long long sum =0,res =0;
        for(int i =0;i<k;i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        
        if(mp.size() == k)
            res = max(res,sum);

        for(int i =k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            
            if(mp[nums[i-k]] == 0)  
                mp.erase(nums[i-k]);
            
            if(mp.size() == k)
                res = max(res,sum);
        }
        
        return res;          
    }
};



