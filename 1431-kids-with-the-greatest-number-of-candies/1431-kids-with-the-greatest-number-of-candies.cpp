class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> temp;
        int maximum = *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies<maximum)
                temp.push_back(false);
            else
                temp.push_back(true);
        }
        return temp;
    }
};