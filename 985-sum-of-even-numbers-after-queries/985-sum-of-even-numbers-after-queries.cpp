class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums,vector<vector<int>>& queries){
       int n=nums.size();
        vector<int> res;
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
                sum+=nums[i];
        }
        
        for(auto q:queries){
            int val=q[0];
            int idx=q[1];
            if(nums[idx]%2==0)
                sum-=nums[idx];
            nums[idx]+=val;
            if(nums[idx]%2==0)
                sum+=nums[idx];
            res.push_back(sum);
        }
        return res; 
    }
};

