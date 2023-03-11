class Solution {
public:
    int findTheWinner(int n, int k) {
       if(n == 1)
            return 1;
        int num = findTheWinner(n-1,k);
        int ans = (num + k)%n;
        if(ans == 0)
            return n;
        return ans; 
    }
};
