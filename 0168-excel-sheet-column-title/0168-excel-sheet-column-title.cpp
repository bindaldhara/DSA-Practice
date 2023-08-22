class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
            int num=columnNumber;
            while(num>0){ 
               num--;
               int remain = num%26;
               char ch = 'A'+remain;
               num/=26;
               ans.push_back(ch);
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};