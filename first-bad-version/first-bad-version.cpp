// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low = 1;
         unsigned int high= n;
        while (low<= high) {
       unsigned int mid = (low+high)/2;
            if (!isBadVersion(mid))
                low = mid+1;
            else
                high = mid-1;
        }
        return high+1;
    }
};

