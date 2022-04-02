class Solution {
public:
    bool isPlaindrome(string s, int low,int high) {
      while (low < high) {
        if (s[low] == s[high]) {
            low++;
            high--;
        }
        else 
            return false;
      }
      return true;
    }

    
  bool validPalindrome(string s) {
    int low = 0, high = s.size() - 1;
    while (low < high) {
      if(s[low] == s[high]){
          low++;
          high--;
      }
      else 
          return (isPlaindrome(s, low + 1, high) || isPlaindrome(s, low, high - 1));
    }
    return true;
        
    }
};

