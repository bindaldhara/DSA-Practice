class Solution {
public:
    bool isPalindrome(string s) {
        string str ;
    for(int i=0 ;i<s.size() ; i++ )
        if(isalnum(s[i])) 
        str+= tolower(s[i]);
        s =str;
    reverse(str.begin(), str.end());
 
    return (str==s);
    }
};