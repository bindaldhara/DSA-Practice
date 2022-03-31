class Solution {
public:
    bool isValid(vector<int>&nums,int m,int mid){
    int lim = 1;
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(sum>mid){
            lim ++;
            sum = nums[i];
        }
    }
     if(lim > m)
        return false;
    else
        return true;
    
}
    
int splitArray(vector<int>& nums, int m) {
    int l=*max_element(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<nums.size();i++)
        sum+=nums[i];
    int h=sum;
    int res=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(isValid(nums,m,mid)){
            res=mid;
            h=mid-1;
            
        }
        else
            l=mid+1;
    }
    return res;
}
};