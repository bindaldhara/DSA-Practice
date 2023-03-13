class Solution {
public:
    int passThePillow(int n, int time) {
        int i = 1;
        bool dir = 1;
        while(time--){
            if(i==n) 
                dir = 0;
            if(i == 1) 
                dir = 1;
            if(dir) 
                i++;
            else 
                i--;
        }
        return i;
    }
};






