class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int flag=1;
         string s=to_string(n);
        for(int i=0;i<s.size();i++){
            if(flag==1){
                sum+=s[i]-'0';
            }
            else{
                sum-=s[i]-'0';
            }
            flag=1-flag;
        }
        return sum;
    }
};
