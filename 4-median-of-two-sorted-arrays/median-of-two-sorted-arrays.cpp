class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        vector<int> merged(size);

        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

        if (size % 2 == 0) {
            return (merged[size/2 - 1] + merged[size/2]) / 2.0;
        } else {
            return merged[size/2];
        }
    }
};