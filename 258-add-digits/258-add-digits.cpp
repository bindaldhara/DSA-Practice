class Solution {
public:
    int addDigits(int num) {
      if(num <= 9)
          return num;
        int s = num % 10 + addDigits(num/10);
        return addDigits(s);  
    }
};