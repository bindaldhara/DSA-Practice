class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int j=0,k =0;
        while(j<n && k<m){
            if(nums1[j]>nums2[k])
                k++;
            else if(nums1[j]<nums2[k])
                j++;
            else if(nums1[j] == nums2[k])
                return nums1[j];
        }
        int ans1 = nums1[0]*10 + nums2[0];
        int ans2 = nums2[0]*10 + nums1[0];
        int ans = min(ans1,ans2);
        return ans;
    }
};