class Solution {
public:
    string getSmallestString(int n, int k) {
        string res(n,'a');
        k-=n;
        int i=n-1;
        while(k>0){
            int value=min(k,25);
            res[i--]+=value;
             k-=value;
        }
       
        return res;
    }
};