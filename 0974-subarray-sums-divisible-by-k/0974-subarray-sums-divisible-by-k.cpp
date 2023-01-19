class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       vector<int> temp(k,0);
         temp[0]=1;
        int res=0,sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res=res+temp[(sum%k+k)%k];
            temp[(sum%k+k)%k]++;
        }
        return res;   
    }
};