class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i=0,j=nums.size()-1,cnt1=0,cnt2=0;
        int res;
        while(i<=j){
            if(nums[i]<0){
            cnt1++;
            i++;
            }else if(nums[i]==0){
                i++;
            }
            if(nums[j]>0){
            cnt2++;
            j--;
            }else if(nums[j]==0){
                j--;
            }
        }
        res=max(cnt1,cnt2);
        return res;
    }
};