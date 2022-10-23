class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size(),dup,sum=0;
        vector<int>res;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            else{
                dup=abs(nums[i]);
                break;
            }
        }
        sum=sum-dup;
        int osum=(n*(n+1))/2;
        int missing=osum-sum;
        res.push_back(dup);
        res.push_back(missing);
        return res;
    }
};