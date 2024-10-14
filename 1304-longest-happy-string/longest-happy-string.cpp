class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s = "";
        int n = a+b+c;
        int cnta = 0,cntb = 0,cntc = 0;
        for(int i=0;i<n;i++){
            if((a>=b && a>=c && cnta!=2) || (a>0 && (cntb==2 || cntc==2))){
                s+="a";
                cnta++;
                cntb = 0;
                cntc = 0;
                a--;
            }
            else if((b>=a && b>=c && cntb!=2) || (b>0 && (cnta==2 || cntc==2))){
                s+="b";
                cntb++;
                cnta = 0;
                cntc = 0;
                b--;
            }
            else if((c>=a && c>=b && cntc!=2) || (c>0 && (cnta==2 || cntb==2))){
                s+="c";
                cntc++;
                cnta = 0;
                cntb = 0;
                c--;
            }
        }
        return s;
    }
};