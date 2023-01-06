class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
         sort(costs.begin(),costs.end());
        int count = 0; 
        for(;count< costs.size() && costs[count] <= coins; count++) 
            coins -= costs[count];
        return count;
    }
};