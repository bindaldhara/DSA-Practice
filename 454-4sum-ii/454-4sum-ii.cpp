class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        unordered_map<int,int> mp1,mp2;
        for(int i=0;i<n;i++)
        {
               for(int j=0;j<n;j++)
               {
                   mp1[nums1[i]+nums2[j]]++;
                   mp2[nums3[i]+nums4[j]]++;
               }
        }
        int count=0;
        for(auto x:mp1)
        {
            for(auto y:mp2)
            {
                if(x.first+y.first==0)
                {
                    count=count+x.second*y.second;
                }
            }
        }
        return count; 
    }
};