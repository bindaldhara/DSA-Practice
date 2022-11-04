class Solution {
public:
    bool checkVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    }
    string reverseVowels(string s) {
        int i=0,j=s.size();
        while(i<j){
            if(!checkVowel(s[i]))
                i++;
            if(!checkVowel(s[j]))
                j--;
            if(checkVowel(s[i]) && checkVowel(s[j])) 
                swap(s[i++], s[j--]);
        }
        return s;
    }
};