class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        if(k==0)
      return num;
      string s=to_string(k);
      vector<int> res;
      int carry=0,i=num.size()-1,j=s.size()-1;
      while(i>=0 || j>=0){
          int sum=carry;
          if(i>=0){
              sum=sum+num[i];
              i--;
          }
          if(j>=0){
              sum=sum+s[j]-'0';
              j--;
          }
          carry=sum/10;
          res.push_back(sum%10);
      }
      if(carry)
      res.push_back(carry);
      reverse(res.begin(),res.end());
      return res;
    }
};