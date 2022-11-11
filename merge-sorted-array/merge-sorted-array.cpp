class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>arr;
    
    for(int i=0;i<m;i++){
            arr.insert(arr.begin(),nums1[i]);
    }
    for(int j=0;j<n;j++){
        arr.insert(arr.begin(),nums2[j]);
    }
    nums1=arr;
    sort(nums1.begin(),nums1.end());
   
    

    }
};