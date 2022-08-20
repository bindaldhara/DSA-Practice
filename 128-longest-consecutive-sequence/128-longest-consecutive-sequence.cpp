class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
           return 0;
      sort(nums.begin(),nums.end());
     int count=0,max=0,n=nums.size();
       for(int i=0;i<n-1;i++){
         if((nums[i])==nums[i+1])
            continue;
         if((nums[i]+1)==nums[i+1])
            count++;
         else if((nums[i]+1)!=nums[i+1])
            count=0;
        if(count>max)
          max=count;
       }
    return max+1;
    }
};