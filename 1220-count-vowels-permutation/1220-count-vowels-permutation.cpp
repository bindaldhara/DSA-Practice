class Solution {
public:
    int countVowelPermutation(int n) {
        const int mod= 1e9+7;
        long a=1,e=1,i=1,o=1,u=1,A,E,I,O,U;
        for(int j=2;j<=n;j++){
            A=e%mod;
            E=(a + i)%mod;
            I=(a + e + o + u)%mod;
            O=(i + u)%mod;
            U=a%mod;          
            a=A;
            e=E;
            i=I;
            o=O;
            u=U;
        }
        return (a+e+i+o+u)%mod;
    }
};


