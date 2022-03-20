class Solution {
public:
    int countOdds(int low, int high) {
        return (high-low)/2 + (high %2 != 0 ||low % 2 != 0 ? 1 : 0);  
    }
};