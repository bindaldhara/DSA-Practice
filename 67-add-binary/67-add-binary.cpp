class Solution {
public:
    string addBinary(string a, string b) {
       int i=a.size()-1,j=b.size()-1;
        int carry=0;
        string ans="";
        while(i>=0|| j>=0){
            int x = (i>=0)?a[i--]-'0':0; 
            int y = (j>=0)?b[j--]-'0':0;
            int s= x+y+carry;
            ans=to_string(s%2)+ans;
            carry=s/2;
        }
        if(carry>0)
               ans=to_string(1)+ans;
        return ans; 
    }
};