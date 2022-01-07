class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(), i = n-1;
            while(i>0 && digits[i]==9){
                digits[i--] = 0;
            }
        if(digits[i] == 9){
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        while(digits[i] == 9){
            digits[i] = 0;
            i--;
        }
        digits[i] = digits[i]+1;
        return digits;
    }
};