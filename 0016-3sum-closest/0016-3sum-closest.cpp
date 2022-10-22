class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<=nums.size()-1;i++){
            int start=i+1,end=nums.size()-1;
            while(start<end){
                int temp=nums[i]+nums[start]+nums[end];
                if(temp==target) 
                    return temp;
                if(abs(temp-target)<abs(res-target)) 
                    res=temp;
                if(temp<target) 
                    start++;
                else 
                    end--;
            }
        }
        return res;
    }
};







