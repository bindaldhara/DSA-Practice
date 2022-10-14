class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int cnt=1,flag=-1;
        for(int i=1;i<nums.size();i++){
            if((nums[i]-nums[i-1]>0) && (flag==0 || flag==-1)){
                cnt++;
                flag=1;
            }
            else if((nums[i]-nums[i-1]<0) && (flag==1 || flag==-1)){
                cnt++;
                flag=0;
            }
        }
        return cnt;
    }
};


