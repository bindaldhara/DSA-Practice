class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int sc=0, maxSc=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
       
        while(i<=j){
            if(power<tokens[i]){
                  if(sc==0)
                      return maxSc;
                else{
                    power+=tokens[j--];
                    sc--;
                }
            }
           else{
               power-=tokens[i++];
               sc++;
           }
            maxSc=max(sc,maxSc);
        }
        return maxSc;
    }
};

