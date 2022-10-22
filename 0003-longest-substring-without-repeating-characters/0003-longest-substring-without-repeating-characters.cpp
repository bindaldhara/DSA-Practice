class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<int> mp;

        int i = 0, j = 0;
        int count = 0;
    while (j < n) {
        if (mp.find(s[j]) == mp.end())
        {
            mp.insert(s[j]);
            ++j;
        }
        else
        {
            mp.erase(s[i]);
            ++i;
        }
        count = max(count, j - i);
    }
    return count;
    }
};

