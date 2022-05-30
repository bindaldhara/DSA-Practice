class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char, int> cnt;
        for (char &c : num) {
            cnt[c]++;
        }
        
        for (int i = 0; i < num.size(); i++) {
            char digit = i + '0';
            if (cnt[digit] != (num[i] - '0')) {
                return false;
            }
        }
        
        return true;
    }
};