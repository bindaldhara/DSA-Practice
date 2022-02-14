class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> arr(26,0),b(26,0);
        int m=s1.length(),n=s2.length();
        if(n<m)return false;
        for(int i=0;i<m;i++){
            b[s1[i]-'a']++;
            arr[s2[i]-'a']++;
        }
        for(int i=m;i<n;i++){
            if(arr==b)return true;
            arr[s2[i]-'a']++;
            arr[s2[i-m]-'a']--;
        }
        if(arr==b)return true;
        return false;
    }
};