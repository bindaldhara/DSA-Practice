class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if (n == 1)   
            return "";
        
        int i = 0,j = n-1;
        bool flag = false; 
        while (i<j){
            if(palindrome[i] != 'a' && palindrome[i] == palindrome[j]){
                palindrome[i] = 'a';
                flag = true; 
                break;
            }
            else{
                i++;
                j--;
            }
        }
        
        if (!flag)
            palindrome[palindrome.size()-1] = 'b';
        return palindrome;
    }
};