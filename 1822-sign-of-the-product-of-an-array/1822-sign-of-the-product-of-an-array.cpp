class Solution {
public:
    int arraySign(vector<int>& nums) {
     bool neg = false;
        for(int i : nums) {
            neg = i < 0 ? !neg : neg;
            if (i == 0) 
                return 0;
        }
        return neg ? -1 : 1;   
    }
};