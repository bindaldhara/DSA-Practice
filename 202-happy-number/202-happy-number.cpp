class Solution {
public:
    int square(int x){
        return x*x;
    }
    
    bool isHappy(int n) {
     unordered_set<int> s;
        while(n!=1){
            int newno=0;
            while(n>0){
                int ldig=n%10;
                newno+=square(ldig);
                n/=10;
            }
            if(s.find(newno)!=s.end())
                return false;
            s.insert(newno);
            n=newno;
        }
        return true;
    }
};