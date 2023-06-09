class Solution {
public:
    int minimizedStringLength(string s) {
        return size(set<char>(begin(s),end(s)));
    }
};