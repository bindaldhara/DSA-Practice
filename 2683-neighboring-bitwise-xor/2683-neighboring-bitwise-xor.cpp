class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
         int xorSum = 0;
        for (int i = 0; i < derived.size() ; i++)
            xorSum ^= derived[i];
        return xorSum == 0 && (derived[0] == 0 || derived[0] == 1);
    }
};