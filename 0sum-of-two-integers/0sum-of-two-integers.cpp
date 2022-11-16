class Solution {
public:
    int getSum(int a, int b) {
        if(a==0 || b==0){
            return a^b;
        }
        return getSum(a^b , (unsigned(a&b) <<1));
    }
};