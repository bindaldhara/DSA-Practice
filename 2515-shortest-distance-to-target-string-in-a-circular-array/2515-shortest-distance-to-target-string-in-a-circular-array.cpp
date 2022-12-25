class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX, n = words.size();
        for (int i = 0; i < n; i++) 
            if (words[i] == target) 
                ans = min(ans, min(abs(startIndex - i), abs(n - abs(startIndex - i))));
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};