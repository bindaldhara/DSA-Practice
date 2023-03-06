class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        for(int j=0;j<=n;j++){
            if(s[j]==' ' || j==n){
                reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            }
        }
        return s;
    }
};