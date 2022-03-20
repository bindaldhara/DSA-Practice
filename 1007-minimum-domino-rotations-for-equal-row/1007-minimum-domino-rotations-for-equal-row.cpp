class Solution {
public:
    int check(int x,vector<int> &tops, vector<int> &bottoms){
        int n = tops.size(),tcnt = 0,bcnt = 0;
        for(int i = 0;i<n;i++)
            if(tops[i] != x && bottoms[i] != x)
                return -1;
        for(int i: tops)
            if(x == i)
                tcnt++;
        for(int i:bottoms)
            if(x == i)
                bcnt++;
        return min(n - tcnt, n - bcnt);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int a = tops[0];
        int b = bottoms[0];
        int res = -1;
        if((res = check(a,tops,bottoms)) != -1) 
            return res;
        else if((res = check(b,tops,bottoms)) != -1) 
            return res;
        else return res;
        
    }
};