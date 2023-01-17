class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum= 0 ; 
        int dsum = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
            esum += nums[i] ;          
        }
        for(int i = 0 ; i < nums.size() ; i++){
            while(nums[i] != 0 ){
                int digit = nums[i]%10 ;
                dsum += digit;
                nums[i] /= 10;
            }
        }
        
        int absoluteDifference = abs(esum - dsum);

        return absoluteDifference;
    }
};