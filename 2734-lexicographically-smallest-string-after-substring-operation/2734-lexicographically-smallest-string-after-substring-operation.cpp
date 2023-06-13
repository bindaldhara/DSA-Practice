class Solution {
public:
    string smallestString(string s) {
        int n=s.size(), i=0;
       
        while(i<n && s[i]=='a'){
             i++;
        }
        if(i==n){
            s[n-1]='z';
            return s;
        }
        while(i<n && s[i]!='a'){
            s[i]--;
            i++;
        }
        
        return s;
    }
};