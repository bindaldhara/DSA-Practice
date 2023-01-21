class Solution {
public:
    bool check(int num){
        return (0 <= num && num <= 255 );
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string ans;
        int P,Q,R,S;
        
        for (int a=1; a<=3; a++)
         for (int b=1; b<=3; b++)
          for (int c=1; c<=3; c++)
           for (int d=1; d<=3; d++) {
               if (a+b+c+d != s.length()) 
                   continue;

               P = stoi(s.substr(0,a));
               Q = stoi(s.substr(a,b));
               R = stoi(s.substr(a+b,c));
               S = stoi(s.substr(a+b+c,d));
               if (check(P) && check(Q) && check(R) && check(S)){
                if ((ans=to_string(P)+"."+to_string(Q)+"."+to_string(R)+"."
                     +to_string(S)).length() == s.length()+3)
                        res.push_back(ans);                   
               }
           }

        return res;
    }
};